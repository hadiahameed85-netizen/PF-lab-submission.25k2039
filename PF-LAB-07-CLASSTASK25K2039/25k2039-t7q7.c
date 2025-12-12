#include<stdio.h>

int main(){
	int mileage[8],i , fleet=0 ,j=0;
	
	printf("enter 8 vehicles mileage(km per litre)");
	for(i=0 ; i<8 ; i++){
		scanf("%d",&mileage[i]);
	}
	
	while(j<=32){ printf("-"); j++; }
	printf("\n vehicle \t mileage \t category \n");
	while(j<=32){ printf("-"); j++; }
	
	for(i=0 ; i<8 ; i++){
		printf("\n %d \t\t %d \t\t",i+1,mileage[i]);
		if(mileage[i]>=18){
			printf("Efficient \n");
		}
		else if(mileage[i]>=12){
			printf("Average \n");
		}
		else if(mileage[i]<12){
			printf("Need Maintenance \n");
			fleet++;
			
		}
		
		if(fleet>3){
			printf("\nFleet Efficiency Alert!");
		}
		 
	}
	
	return 0;
}

