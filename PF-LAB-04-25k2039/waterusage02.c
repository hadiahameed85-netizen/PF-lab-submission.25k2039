#include <stdio.h>

int main(){
	float usage;
	
	printf("enter monthly water usage (litres): \n");
	scanf("%f",&usage);
	
	if(usage<=3000){
		printf("Bill=500 PKR");
	}else{
			printf("Bill=1000 PKR");
	}
	
	return 0;
}


