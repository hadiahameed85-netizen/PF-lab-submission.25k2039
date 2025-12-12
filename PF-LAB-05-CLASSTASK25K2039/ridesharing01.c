#include <stdio.h>

int main(){
	int age;
	float balance;
	
	printf("enter your age: \n");
	scanf("%d",&age);
	
	printf("enter your account balance: \n");
	scanf("%f",&balance);
	
	if(age<21){
		
		printf("Not eligible for ride (underage)");
		
	}else{
		
		if(balance<200){
			
			printf("Not eligible (insufficient balance)");
			
		}else{
			
			printf("Eligible for ride");
			
		}
	}
	
	
	
	return 0;
} 
