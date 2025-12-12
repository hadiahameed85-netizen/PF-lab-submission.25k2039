#include <stdio.h>

int discount(int *arr);

int main(){
    int price[5], i, btotal = 0;

    printf("enter price of 5 products: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &price[i]);
        btotal += price[i];
    }

    printf("Total amount before discount: %d \n", btotal);
    int total = discount(price);
    printf("Total amount after discount: %d \n", total);

    return 0;
}

int discount(int *price){
    int i;
    int total = 0;

    for(i = 0; i < 5; i++){
        if(price[i] > 5000){
            price[i] -= price[i] * 0.25;
        }
        else if(price[i] >= 1000){
            price[i] -= price[i] * 0.15;
        }
        else{
            price[i] -= price[i] * 0.1;
        }
    }

    for(i = 0; i < 5; i++){
        total += price[i];
    }

    return total;
}