#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    char name[100];
    int age;
};

struct student{
    struct person p;
    int credithours;
    int percreditfee;
};

int fee(int n, int subject[], struct student *s){
    if(n==0){
        return 0;
    }
    else{
        return (s->percreditfee * subject[n-1]) + fee(n-1, subject, s);
    }
}

int main(){
    struct student s;
    int n,i;

    printf("enter student name:");
    fgets(s.p.name, 100, stdin);
    s.p.name[strcspn(s.p.name, "\n")] = '\0';

    printf("enter age:");
    scanf("%d",&s.p.age);

    printf("enter per credit hours fee:");
    scanf("%d", &s.percreditfee);

    printf("enter number of subject:");
    scanf("%d",&n);

    int subject[n];

    for (i=0; i<n; i++){
        printf("enter subject %d credit hour:",i+1);
        scanf("%d", &subject[i]);
    }

    int total = fee(n, subject, &s);

    printf("Name: %s\n",s.p.name);
    printf("Age: %d\n",s.p.age);
    printf("Per credit fee: %d\n",s.percreditfee);
    printf("total semester fee: %d\n", total);
    
    return 0;
}