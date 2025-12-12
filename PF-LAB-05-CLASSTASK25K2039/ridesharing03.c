#include <stdio.h>
#include <math.h>

int main(){
	int requested;
    float multiplier;
    
    printf("enter number of rides requested");
    scanf("%d",&requested);
    
    multiplier=sqrt(requested)/2;
    
    if(multiplier>3){
    	multiplier=3.0;
	}
	
	printf("the final surge multiplier= %.2f",multiplier);
	
	return 0;
} 
