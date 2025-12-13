#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void savetofile(float *t, int n ,const char *fn, int max, int low , int count){
    FILE *fp;
    fp = fopen(fn , "a+");
    int i;
    if(fp == NULL){
        printf(" file no exist\n");
        fclose(fp);
        return;
    }
    fprintf(fp , "\t Temperature Summary\n");
    for (int i=0 ; i<n ; i++){
        fprintf(fp , "%dday temperature: %.2f\n",i+1 , t[i]);
    }
    fprintf(fp , "low temp: %d\n",low);
    fprintf(fp , "Max temp: %d\n",max);
    fprintf(fp , "No.of reading under threshold: %d\n", count);
    printf("Data added successfully to the file!\n");

    fclose(fp); 
}

int main(){
    printf("temperature Monitoring and alert system");
    float *t;
    int n , i;

    printf("Enter days:");
    scanf("%d",&n);
    t = (float*)malloc(n* sizeof(float));
    
    for(i=0 ; i<n ; i++){
        printf("day%d temperature(*C):",i+1);
        scanf("%f",(t+i));
    }
    int nn;
    printf("additional days(if no then 0):");
    scanf("%d", &nn);
    t= (float*)realloc(t, (n+nn)* sizeof(float));

    while(i < (n+nn)){
        printf("day%d temperature(*c):", i+1);
        scanf("%f",(t+i));
        i++;
    }
    // lowest and highest
    float max = *(t+0), low = *(t+0);
    for(i=1 ; i< (n+nn) ; i++){
        if(*(t+i) > max){
            max = *(t+i);
        }

        if(*(t+i) < low){
            low = *(t+i);
        }
    }

    int count = 0;
     for(i=0 ; i<(n+nn) ; i++){
        if(*(t+i) < 32 ){     //threshold temperature 32*C
            count++;
        }    
    }

    printf("Highest temperature: %.2f\n", max);
    printf("Low temperature: %.2f\n\n",low);
   printf("%d reading are under threshold", count);
   
   savetofile(t , n+nn , "temp_summary.txt" , max , low, count);

    return 0;
}