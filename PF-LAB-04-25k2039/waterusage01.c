#include<stdio.h>

int main(){
	float litres;
	
	printf("enter daily water usage (liters): \n");
	scanf("%f",&litres);
	
	if(litres<=100){
		printf("Efficient Usage");
	}else{
		printf("high usage detected");
	}
	
	
	return 0;
}
