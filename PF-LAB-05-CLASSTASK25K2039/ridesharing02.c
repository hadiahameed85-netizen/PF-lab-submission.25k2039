#include <stdio.h>

int main(){
	int type;
	char distance;
	
	printf("enter your ride type: \n 1 = Economy \n 2 = Business \n 3 = Luxury \n ");
	scanf("%d",&type);
	
	if(type>=1 && type<=3){
		printf("enter your distance \nlong (L)\nshort(s): \n");
    	scanf(" %c",&distance);
				
			switch(distance){
				case 's':
				case 'S':
					{
					printf("base fare = 100");
			    	}	
				break; //break for case s
					
				case 'l':
				case 'L':
					{
						printf("base fare = 300");
					}
				break; //break for case L
				
				default:
					printf("invalid input");
					
			}

	}else{
		printf("invalid input");
	}
	
	return 0;
} 
