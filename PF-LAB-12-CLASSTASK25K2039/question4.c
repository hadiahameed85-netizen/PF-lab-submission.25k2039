#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
    int day, month, year;
};

struct books {
    char booktitle[100];
    char memberid[50];
    char checkouttime[10];
    int returnduedays;
    struct date duedate;
};

void computedate(struct date *d, int addDays) {
    d->day += addDays;

    if (d->day > 30) {     
        d->day -= 30;
        d->month++;
    }

    if (d->month > 12) {
        d->month = 1;
        d->year++;
    }
}

// Save to CSV File 
void saveToCSV(struct books *b, int n) {
    FILE *fp = fopen("library.csv", "a");
    if (fp == NULL) {
        printf("File opening failed!\n");
        return;
    }

    fprintf(fp, "BookTitle,MemberID,CheckoutTime,DueDays,DueDate\n");

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s,%s,%s,%d,%02d-%02d-%d\n",
                b[i].booktitle,
                b[i].memberid,
                b[i].checkouttime,
                b[i].returnduedays,
                b[i].duedate.day,
                b[i].duedate.month,
                b[i].duedate.year);
    }

    fclose(fp);
    printf("\n Data saved successfully in the file!\n");
}

int main() {
    struct books *b;
    int n, i;

    printf("------- DIGITAL LIBRARY -------\n");
    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    b = (struct books *)malloc(n * sizeof(struct books));

    for (i = 0; i < n; i++) {
        printf("\nRecord %d\n", i + 1);

        printf("Enter book title: ");
        fgets(b[i].booktitle, 100, stdin);
        b[i].booktitle[strcspn(b[i].booktitle, "\n")] = '\0';

        printf("Enter member ID: ");
        fgets(b[i].memberid, 50, stdin);
        b[i].memberid[strcspn(b[i].memberid, "\n")] = '\0';

        printf("Enter checkout time (HH:MM): ");
        fgets(b[i].checkouttime, 10, stdin);
        b[i].checkouttime[strcspn(b[i].checkouttime, "\n")] = '\0';

        printf("Enter return due days: ");
        scanf("%d", &b[i].returnduedays);
        getchar();

        /* Base date (you can change this) */
        b[i].duedate.day = 12;
        b[i].duedate.month = 3;
        b[i].duedate.year = 2025;

        computedate(&b[i].duedate, b[i].returnduedays);
    }

    printf("\n------ DUE DATE REPORT ------\n");
    for (i = 0; i < n; i++) {
        printf("%s → Due Date: %02d-%02d-%d\n",
               b[i].booktitle,
               b[i].duedate.day,
               b[i].duedate.month,
               b[i].duedate.year);
    }

    saveToCSV(b, n);

    free(b);
    return 0;
}
