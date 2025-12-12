#include <stdio.h>

int main(){
	float usage;
	
	printf("enter monthly water usage (litres): \n");
	scanf("%f",&usage);
	
	if(usage<=3000){
		printf("no fine");
	}else
  	if(usage<=5000){
		printf("fine = 200 PKR");
	}else
	if(usage<=7000){
		printf("fine = 500 PKR");
	}else{
		printf(" fine = 1000 + water supply restricted");
	}
	
	return 0;
}
