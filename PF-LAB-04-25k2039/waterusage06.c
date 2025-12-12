#include <stdio.h>

int main(){
	int usage , days;	
	printf("enter monthly usage of water (litres) \n");
	scanf("%d",&usage);
	
	printf("enter number of days water was saved (i.e. usage < 80 liters/day) \n");
	scanf("%d",&days);
	
	if(usage<2500 && days>10){
		printf("bonus: 300 PKR discount");
	
	}else {
		printf("no bonus");
	}
	
	
	return 0;
}
