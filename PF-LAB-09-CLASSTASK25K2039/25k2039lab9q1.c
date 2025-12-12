#include <stdio.h>

void denomination_check(int *amount);

int main(){
    int money;

    printf("enter how much money you want to withdraw:");
    scanf("%d", &money);

    if(money % 50 == 0){
        denomination_check(&money);
    }else{
        printf("cant withdraw money! amount should be multiple of 50");
    }
}

void denomination_check(int *amount){
    int count[3] = {0};
    while(*amount > 0){
        if(*amount >= 5000){
            count[0]++;
            *amount -= 5000;
        }
        else if(*amount >= 1000){
            count[1]++;
            *amount -= 1000;
        }
        else if(*amount >= 500){
            count[2]++;
            *amount -= 500;
        }
        else{
            break;
        }
    }

    printf("5000 dominations = %d\n", count[0]);
    printf("1000 dominations = %d\n", count[1]);
    printf("500 dominations = %d\n", count[2]);
}