#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Medicine {
    char name[100];
    int quantity;
    float price;
};

void addMedicine(struct Medicine **arr, int *size) {
    *arr = realloc(*arr, (*size + 1) * sizeof(struct Medicine));

    printf("Enter Medicine Name: ");
    scanf(" %[^\n]", (*arr)[*size].name);

    printf("Enter Quantity Available: ");
    scanf("%d", &(*arr)[*size].quantity);

    printf("Enter Unit Price: ");
    scanf("%f", &(*arr)[*size].price);

    (*size)++;
    printf(" Medicine Added Successfully!\n");
}

void removeMedicine(struct Medicine **arr, int *size) {
    if (*size == 0) {
        printf(" No medicines to remove!\n");
        return;
    }

    int index;
    printf("Enter Medicine Index to Remove (0 to %d): ", *size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= *size) {
        printf(" Invalid Index!\n");
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        (*arr)[i] = (*arr)[i + 1];
    }

    *arr = realloc(*arr, (*size - 1) * sizeof(struct Medicine));
    (*size)--;
    printf(" Medicine Removed Successfully!\n");
}

void displayMedicines(struct Medicine *arr, int size) {
    if (size == 0) {
        printf("No medicines in inventory.\n");
        return;
    }

    printf("\n----- MEDICINE INVENTORY -----\n");
    for (int i = 0; i < size; i++) {
        printf("%d) %s | Qty: %d | Price: %.2f\n",
               i, arr[i].name, arr[i].quantity, arr[i].price);
    }
}

void totalInventoryValue(struct Medicine *arr, int size) {
    float total = 0;

    for (int i = 0; i < size; i++) {
        total += arr[i].quantity * arr[i].price;
    }

    printf("Total Inventory Value: %.2f\n", total);
}

void lowStockAlert(struct Medicine *arr, int size) {
    printf("\n LOW STOCK ALERT (Below 5 Units)\n");

    for (int i = 0; i < size; i++) {
        if (arr[i].quantity < 5) {
            printf(" %s | Qty: %d\n", arr[i].name, arr[i].quantity);
        }
    }
}

void saveToFile(struct Medicine *arr, int size) {
    FILE *fp = fopen("medicine_inventory.txt", "w");

    if (fp == NULL) {
        printf("File Error!\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(fp, "%s %d %.2f\n",
                arr[i].name,
                arr[i].quantity,
                arr[i].price);
    }

    fclose(fp);
    printf("Inventory Saved to medicine_inventory.txt\n");
}

int main() {
    struct Medicine *inventory = NULL;
    int size = 0;
    int choice;

    do {
        printf("\n------ MEDICATION INVENTORY MANAGER------\n");
        printf("1. Add Medicine\n");
        printf("2. Remove Medicine\n");
        printf("3. Display Medicines\n");
        printf("4. Total Inventory Value\n");
        printf("5. Low Stock Alerts\n");
        printf("6. Exit & Save\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:     addMedicine(&inventory, &size);    break;
            case 2:     removeMedicine(&inventory, &size);     break;
            case 3:     displayMedicines(inventory, size);    break;
            case 4:     totalInventoryValue(inventory, size);    break;
            case 5:     lowStockAlert(inventory, size);       break;
            case 6:     saveToFile(inventory, size);
                        free(inventory);
                        printf("Program Exited Successfully.\n");
                        break;
            default:
                         printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}
