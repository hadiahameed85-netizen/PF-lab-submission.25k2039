#include<stdio.h>
#include<stdlib.h>

int main(){
	float mark[5],  sum=0 , total,percentage , CGPA;
	int i;
	
	printf("enter marks of 5 subject :");
	for(i=1;i<=5;i++){
		scanf("%f", &mark[i]);
		total += mark[i];
	}
	percentage = (total / 500) * 100;
    CGPA = (percentage / 100) * 4;
    
    
	printf("\n");
	for(i=0;i<=31;i++){
		printf("-");
	}	
	
	printf(" \n \t STUDENT RESULT \t \n");
	
	for(i=0;i<=31;i++){
		printf("-");
	}	
	printf("\n");
	
	   printf("Marks: ");
    for( i = 1; i<=5; i++) {
        printf("%.1f", mark[i]);
        if(i < 5) {
        		printf(", ");
		}
	
    }
    
    printf("\n");

    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("CGPA: %.2f / 4.00\n", CGPA);
    

    return 0;
}

