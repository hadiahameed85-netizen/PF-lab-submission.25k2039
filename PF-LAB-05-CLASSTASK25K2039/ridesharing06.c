#include <stdio.h>

int main(){
	int rating,distance;
	
	printf("enter driver distance from passenger in km : \n");
	scanf("%d",&distance);
	
	printf("driver rating (1-5):");
	scanf("%d",&rating);
	
	if(rating>=4 && distance<=5){
		
		printf("Top driver nearby");
		
	}
	else if(rating>=3 && distance<=10){
		
		 printf("Average driver assigned");
		 
	}
	else{
		
		printf("no suitable diver available");
		
	}
	
	
	return 0;
}
