#include <stdio.h>

int main(){
	int family_member,usage;
	
	printf("enter total family member: \n");
	scanf("%d",&family_member);
	
	printf("enter amount of monthly usage of water (litres): \n");
	scanf("%d",&usage);
	
	if(usage>3000){
		if(family_member>6){
			printf("Allowed: Large Family Exception");
		}
	}
	else{
		printf("fine applied");
	}
	return 0;
}

