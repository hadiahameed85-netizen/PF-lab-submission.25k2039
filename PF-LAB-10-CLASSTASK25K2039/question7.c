#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char catogory[100];;
    int amount ,i ;
    
    FILE *fp;
    fp = fopen("expense.txt", "a");
     
    printf("enter the expense catogory:");
    fgets(catogory, 100, stdin);
    catogory[strcspn(catogory, "\n")] = '\0';

    printf("enter the amount spent:");
    scanf("%d",&amount);

    fprintf(fp , "%s %d\n", catogory, amount);
    fclose(fp);

    fp= fopen("expense.txt", "r");
    while(fscanf(fp , "%s %d", catogory , &amount) != EOF){
        printf("catogory: %s  amount spent: %d\n", catogory, amount);
    }
    fclose(fp);
    return 0;
}