#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    int count = 0;

    FILE *fp;
    fp = fopen("attendance.txt", "r");

    if(fp == NULL){
        printf("file doesn't opened");
    }else{
         while(fgets(name, 100, fp)){
        printf("%s", name);
        count++;
    }
   }
    
    printf("Total number of students: %d\n",count);
    fclose(fp);
    return 0;
}