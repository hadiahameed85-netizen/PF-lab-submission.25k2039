#include <stdio.h>
#include <math.h>

int main(){
	int distance,requested;
	char type;
	float multiplier,total_fare;
	
	printf("enter distance (km): \n");
	scanf("%d",&distance);
	
	printf("enter your ride type(only start letter): \n E=economy \n B= business \n L= luxury \n ");
	scanf(" %c",&type);
    
    printf("enter number of rides requested:\n");
    scanf("%d",&requested);
    
    multiplier=sqrt(requested)/2;
    
    if(multiplier>3){
    	multiplier=3.0;
	}
	
	switch(type){
		case 'e':
		case 'E':
		{
	    	total_fare=50 * distance * multiplier;
	    }
		break;
		
		case 'b':
		case 'B':
		{
			total_fare=100 * distance * multiplier;
		}
		break;
		
		case 'l':
		case 'L':
		{
			total_fare=200 * distance * multiplier;
		}
		break;
		
		default:
		    printf("invalid input");
			
	}
	
	printf(" the total fare= %.2f",total_fare);
	
	
	return 0;
} 
