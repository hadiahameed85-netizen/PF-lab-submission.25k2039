#include <stdio.h>

int main(){
	int num , factorial=1 , i;
	
	printf("enter the sum of your last two digits of your student ID as integer:");
	scanf("%d",&num);
	
	for(i=1 ;i <=num ; i++){
		
		factorial *= i;
		
	}
	printf("factorial = %d",factorial);
	
	return 0;
}
