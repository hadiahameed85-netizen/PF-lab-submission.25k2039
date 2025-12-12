#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float p, annual_interest_rate ,r; //p=principal amount,r=monthly interest, n=total months
	int duration,n ,i;
	double EMI;
	
	printf("enter loan amount:");
	scanf("%f",&p);
	printf("enter annual interest rate (%%):");
	scanf("%f",&annual_interest_rate);
	printf("enter duration (years):");
	scanf("%d",&duration);
	
	r=annual_interest_rate/(12*100); n=duration*12;
    EMI= (p * r * pow(1+r,n) )/ ( pow(1 + r,n) - 1);
    
    for(i=0;i<=31;i++){
    	printf("-");
	}
	
	printf("\n \t LOAN CALCULATION \t \n");
	
	for(i=0;i<=31;i++){
    	printf("-");
	}
	
	printf("\n Loan Amount: \t %.2f",p);
	printf("\n duration: \t %d years (%d months)",duration ,n);
	printf("\n interest rate: %.2f%%",annual_interest_rate);
    printf("\n Monthly EMI: \t %.2f",EMI);
    
	
	return 0;
}
