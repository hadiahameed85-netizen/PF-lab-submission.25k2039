#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RATE_PER_HOUR 50
#define RATE_PER_DAY 500

int main() {
    int *durations = NULL;    
    int *types = NULL;       
    int customers = 0;
    char choice;
    int totalTime = 0;
    int maxDuration = 0;

    FILE *fp = fopen("rental_invoice.txt", "w");

    if (fp == NULL) {
        printf("file not found!\n");
        return 1;
    }

    printf("-------- CAR RENTAL SYSTEM ----------\n");

    do {
        customers++;

        durations = realloc(durations, customers * sizeof(int));
        types = realloc(types, customers * sizeof(int));

        if (durations == NULL || types == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("\nCustomer %d\n", customers);
        printf("Enter rental duration: ");
        scanf("%d", &durations[customers - 1]);

        printf("Enter type (0 = Hours, 1 = Days): ");
        scanf("%d", &types[customers - 1]);

        if (types[customers - 1] == 1)
            totalTime += durations[customers - 1] * 24;
        else
            totalTime += durations[customers - 1];

        if (durations[customers - 1] > maxDuration)
            maxDuration = durations[customers - 1];

        printf("Add another customer? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    int totalRevenue = 0;

    for (int i = 0; i < customers; i++) {
        int cost;

        if (types[i] == 1)
            cost = durations[i] * RATE_PER_DAY;
        else
            cost = durations[i] * RATE_PER_HOUR;

        totalRevenue += cost;

        fprintf(fp, "\nCustomer %d", i + 1);
        fprintf(fp, "\nDuration: %d %s", durations[i], types[i] == 1 ? "Days" : "Hours");
        fprintf(fp, "\nCost: Rs %d\n", cost);
    }

    fprintf(fp, "\n-----------------------------\n");
    fprintf(fp, "\nTotal Customers: %d", customers);
    fprintf(fp, "\nTotal Rental Time (in hours): %d", totalTime);
    fprintf(fp, "\nHighest Rental Duration: %d", maxDuration);
    fprintf(fp, "\nTotal Revenue: Rs %d\n", totalRevenue);

    fclose(fp);

    printf("\nInvoices successfully saved to Rental_Invoices.txt\n");

    free(durations);
    free(types);

    return 0;
}
