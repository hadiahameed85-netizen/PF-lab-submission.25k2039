#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void savetofile(int *s, int n ,const char *fn , int max , int total ){
    FILE *fp;
    fp = fopen(fn , "a+");
    if(fp == NULL){
        printf(" file no exist\n");
        fclose(fp);
        return;
    }
    fprintf(fp , "\t fitness Tracker\n");
    for (int i=0 ; i<n ; i++){
        fprintf(fp , "%dhour steps: %d\n",i+1 , s[i]);
    }
    fprintf(fp , "total hour: %d\n",n);
    fprintf(fp , "Max step: %d\n",max);
    fprintf(fp , "Total step: %d\n", total);
    printf("Data added successfully to the file!\n");

    fclose(fp); 
}

int main(){
    int n , *s= NULL , i;
    int hour, max =0;
    int total=0;

    printf("---------Fitness tracker--------\n");
    printf("enter total number of hours: ");
    scanf("%d",&n);
   
    s = (int*)malloc(n * sizeof(int));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(i=0 ; i<n ; i++){
        printf("enter %dhour foot step:",i+1);
        scanf("%d", (s + i));
        total += *(s+i);
    }
    int nn;
    printf("enter new hour(0 for No):");
    scanf("%d",&nn);

    s= (int*)realloc(s, (n + nn) * sizeof(int));

    while(i< nn + n){
        printf("enter %d hour fooy step:",i+1);
        scanf("%d", (s + i));
         total += *(s+i);
        i++;
    }

    for(i=0 ; i<(n+nn) ;i++){
        if(*(s+i) > max ){
            max = s[i];
        }
    }

    savetofile(s , (n + nn), "fitness_tracker.txt" , max , total);

    // display 
    printf("total hour :%d\n", n+nn);
    printf("Max steps per hour: %d\n", max);
    printf("Total steps: %d\n",total);

    free(s);
    return 0;
}
