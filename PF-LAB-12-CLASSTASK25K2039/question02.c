#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct seat {
    char studentname[100];
    char rollnumber[50];
    int seatnumber;
};

int validation(char *roll, int index) {
    if (roll[index] == '\0')
        return 1;

    if (!isalnum(roll[index]))
        return 0;

    return validation(roll, index + 1);
}

void savetofile(struct seat *s, int count, const char *fn) {
    FILE *fp = fopen(fn, "a+");
    if (fp == NULL) {
        printf("File could not be opened.\n");
        return;
    }

    fprintf(fp, "Student , RollNumber , SeatNumber\n");

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s , %s , %d\n", 
                s[i].studentname, 
                s[i].rollnumber, 
                s[i].seatnumber);
    }

    fclose(fp);
    printf("Data saved successfully!\n");
}

int main() {
    struct seat *s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();  // clear buffer

    s = malloc(n * sizeof(struct seat));

    for (i = 0; i < n; i++) {
        printf("\nStudent %d Details:\n", i + 1);

        printf("Name: ");
        fgets(s[i].studentname, 100, stdin);
        s[i].studentname[strcspn(s[i].studentname, "\n")] = '\0';

        printf("Roll Number: ");
        scanf("%s", s[i].rollnumber);

        if (!validation(s[i].rollnumber, 0)) {
            printf("Invalid roll number!\n");
            i--;
            getchar();
            continue;
        }

        printf("Seat Number: ");
        scanf("%d", &s[i].seatnumber);

        getchar(); 
    }

    int add;
    printf("Enter additional student count (0 if none): ");
    scanf("%d", &add);
    getchar();

    s = realloc(s, (n + add) * sizeof(struct seat));

    while (i < n + add) {
        printf("\nStudent %d Details:\n", i + 1);

        printf("Name: ");
        fgets(s[i].studentname, 100, stdin);
        s[i].studentname[strcspn(s[i].studentname, "\n")] = '\0';

        printf("Roll Number: ");
        scanf("%s", s[i].rollnumber);

        if (!validation(s[i].rollnumber, 0)) {
            printf("Invalid roll number!\n");
            getchar();
            continue;
        }

        printf("Seat Number: ");
        scanf("%d", &s[i].seatnumber);

        getchar();
        i++;
    }

    savetofile(s, n + add, "seating.txt");

    free(s);
    return 0;
}
