#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct report{
    int day;
    int scorechange;
};

struct patient{
    char name [100];
    int age;
    int healthscore;
    struct report r[100];
};

int cal_report(int days,int i, struct patient *p){
    if(i >= days){
        return 0;
    }
    else{
        return p->r[i].scorechange + cal_report (days, i+1, p);
    }
}

int main(){
    struct patient p;
    int n,i;

    printf("-----------------------------------------------\n");
    printf("          Hospital Patient Monitoring           \n");
    printf("------------------------------------------------\n");

    printf("enter patient name:");
    fgets(p.name, 100, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("enter age:");
    scanf("%d",&p.age);

    printf("enter patient health:");
    scanf("%d",&p.healthscore);

    printf("enter the number of days you want to compute health score:");
    scanf("%d",&n);

    for(i=0; i<n; i++){
         printf("enter day %d scorechange:",i+1);
         scanf("%d",&p.r[i].scorechange);
    }

    int final = cal_report(n, 0, &p);

    printf("the final health score: %d",p.healthscore+final);
    return 0;
}