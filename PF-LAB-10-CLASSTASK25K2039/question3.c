#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     char name[5][100];
     float average[5] , max=0;
     int i;

     FILE *fp;
     fp = fopen("temperature.txt", "w");
     if(fp == NULL){
         printf("file doesn't opened");
     }
    
     for(i=0 ; i<5 ; i++){
        printf("Enter %d city name",i+1);
        getchar();
        fgets(name[i] , 100, stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("enter average temperature of the city");
        scanf("%f",&average[i]);
        
        fprintf(fp, "%s %.2f\n", name[i], average[i]);

     }
        fclose(fp);
         fp = fopen("temperature.txt", "r");

         i=0;
         while(fscanf(fp, "%s %f", name[i], &average[i]) == 2){
            if(average[i]>max){
                max = average[i];
            }
            i++;
         }

       printf("The highest average temperature is %.2f\n", max);
       fclose(fp);

       return 0;
}