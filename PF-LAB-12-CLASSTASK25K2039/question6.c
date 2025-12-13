#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int totalAttendance(int arr[], int n) {
    if (n == 0)
        return 0;
    else
    return arr[n - 1] + totalAttendance(arr, n - 1);
}

int main() {
    int *gates = NULL; 
    int numGates = 0;
    char choice;
    int maxAttendance = 0, maxGate = 0;

    FILE *fp = fopen("attendance.txt", "w");
    if (fp == NULL) {
        printf("File cannot be created!\n");
        return 1;
    }

    printf("------REAL-TIME EVENT ATTENDANCE COUNTER-----\n");

    do {
        numGates++;

        gates = realloc(gates, numGates * sizeof(int));
        if (gates == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("\nEnter headcount for Gate %d: ", numGates);
        scanf("%d", &gates[numGates - 1]);

        printf("Add another gate? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    maxAttendance = gates[0];
    for (int i = 1; i < numGates; i++) {
        if (gates[i] > maxAttendance) {
            maxAttendance = gates[i];
            maxGate = i;
        }
    }

    int total = totalAttendance(gates, numGates);

    time_t now;
    time(&now);

    fprintf(fp, "===== EVENT ATTENDANCE REPORT =====\n");
    fprintf(fp, "Date & Time: %s\n", ctime(&now));

    for (int i = 0; i < numGates; i++) {
        fprintf(fp, "Gate %d Attendance: %d\n", i + 1, gates[i]);
    }

    fprintf(fp, "\nTotal Gates: %d", numGates);
    fprintf(fp, "\nTotal Attendees: %d", total);
    fprintf(fp, "\nHighest Attendance Gate: %d", maxGate + 1);
    fprintf(fp, "\nHighest Attendance: %d\n", maxAttendance);

    fclose(fp);
    free(gates);

    printf("\nAttendance data saved to attendance.txt\n");

    return 0;
}
