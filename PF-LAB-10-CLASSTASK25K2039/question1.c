#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    char name[50];
    int price , quantity;

    FILE *fp;
    fp = fopen("product.txt", "a");

    printf("enter product name:");
    fgets(name, 50 ,stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("enter price:");
    scanf("%d",&price);

    printf("enter quantity:");
    scanf("%d",&quantity);

    fprintf(fp, "%s %d %d\n", name, price, quantity);
    fclose(fp);

    if(fp != NULL){
        printf("Successfully! data has been stored");
    }

    return 0;
}