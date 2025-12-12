#include <stdio.h>

int main(){
	int family,catogary,usage,days,i;
	float total=0,bill=0,fine=0,bonus=0;
	
	printf("enter amount of monthly usage of water (litres): \n");
	scanf("%d",&usage);
	
	printf("enter your total family member count : \n");
	scanf("%d",&family);
	
	printf("classify your category code (1-4) : \n" );
	scanf("%d",&catogary);
	
	printf("enter number of days water was saved (i.e. usage < 80 liters/day) \n");
	scanf("%d",&days);
	
	
	if(usage<=3000){
		bill+=500;
	}else{
		bill+=1000;
	    	if(usage<=5000){
	    		
	    	  fine+=200;
			  	
	        }else
        	if(usage<=7000){
        		
        		fine+=500;
        		
        	}else{
        		
        		fine+=0;
        		
          	}
		
	}
	
	
	if(usage<2500 && days>10){
		
		bonus+=300;
	
	}else {
		bonus+=0;
	}
	
	total=bill+fine-bonus;
	
	for(i=0;i<=36;i++){
    	printf("-");
	}
	
	switch(catogary){
		case 1:
			printf("\n Low Usage Household");
			break;
			
		case 2:
			printf("\n Average Household");
			break;
			
		case 3:
			printf("\n High Usage Household");
			break;
			
		case 4:
			printf("\n Excessive Usage Household");
			break;
			
		default:
		printf("\n Invalid Category Code");
			
	}
	
	printf(" bill = %.2f \n",bill);
	printf(" bonus = %.2f \n",bonus);
	printf(" fine = %.2f \n",fine);
	printf(" total = %.2f \n",total);
	
	
	
	return 0;
}
