#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
	int age,requested,point,distance,i,rating;
	float balance, multiplier,total,total_fare;
	char type;
	
	printf("enter your age: \n");
	scanf("%d",&age);
	
	printf("enter your account balance: \n");
	scanf("%f",&balance);
	
	
	if(age<21){
		
		printf("Not eligible for ride (underage)");
		
	}else{
		
		if(balance<200){
			
			printf("Not eligible (insufficient balance)");
			
		}else{
			
			printf("Eligible for ride kindly provide further details: \n");
			
			printf("enter distance (km): \n");
        	scanf("%d",&distance);
	
        	printf("enter your ride type(only start letter): \n E=economy \n B= business \n L= luxury \n ");
        	scanf(" %c",&type);
      
            printf("enter number of rides requested:\n");
            scanf("%d",&requested);
            
            printf("enter passenger loyality point: \n");
	        scanf("%d",&point);
	        
	        printf("driver rating (1-5):");
	        scanf("%d",&rating);
    
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
         	
         	(point>1000)? (total= total_fare + (total_fare* 0.2)): (total= total_fare + (total_fare* 0.05));
         	
         	for(i=1;i<=32;i++){
         		printf("-");
			 }
			 
			 printf("\n");
			 printf("\t RIDE DETAIL \n");
			 printf("\n");
			 
			for(i=1;i<=32;i++){
         		printf("-");
         	  }
         	  
         	if(rating>=4 && distance<=5){
		
	      	printf("\n Driver assigned: \t Top driver nearby \n");
		
	        }
	        else if(rating>=3 && distance<=10){
		
		    printf("\n Driver assigned: \t Average driver assigned \n");
		 
	        }
	        else{
		
	     	printf("\n Driver assigned: \t no suitable driver available \n");
	     	exit(0);
		
	        }
			printf("total fare : \t %.2f \n",total_fare);
			printf("total fare after discount : \t %.2f \n",total);
         	
			
		}
	}
	
	return 0;
}
