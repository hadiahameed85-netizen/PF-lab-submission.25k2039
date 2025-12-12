#include <stdio.h>

int main(){
	int num,mod;
	
	printf("enter a positive number:");
	scanf("%d",&num);
	
	while(num>0){
		mod= num % 10;
		printf("%d",mod);
		num /=10;
	}
	
	return 0;
}
