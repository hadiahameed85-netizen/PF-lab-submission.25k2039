#include <stdio.h>

int main(){
	int num , sum=0 ,mod;
	
	printf("enter a positive integer :");
	scanf("%d",&num);
	
	while(num>0){
		mod= num % 10;
		sum += mod;
		num /= 10;
	}
	
	printf("sum of the number's digits is : %d",sum);
	
	return 0;
} 
