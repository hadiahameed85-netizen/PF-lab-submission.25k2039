#include <stdio.h>

int main(){
	int price[10],discount[10],total,i,j;
	
	printf("enter the price of 10 items");
	for(i=0 ; i<10 ;i++){
		
		scanf("%d",&price[i]);
	}
	
	for(i=0 ; i<10 ;i++){
		if(price[i]<1000){
			discount[i]= price[i]+ price[i]*0.05;
			total+=discount[i];
			
		}
		else if(price[i]<=5000){
			discount[i]= price[i]- price[i]*0.10;
			total+=discount[i];
			
		}
		else {
			discount[i]= price[i]+ price[i]*0.15;
			total+=discount[i];
			
		}
	
	}
	for(j=0 ; j<=32 ;j++){	printf("-"); }
	printf("\n\t BILL \t \n");
	for(j=0 ; j<=32 ;j++){	printf("-"); }
	printf("\nproduct \t price \t discounted price \n ");
	
	for(j=0 ; j<=32 ;j++){	printf("-"); }
	printf("\n");
	
	for (i=0 ; i<10 ;i++){
		printf("%d \t %d \t %d \n",i+1,price[i],discount[i]);
	}
	
	printf("\nTotal price: %d \n",total);
	if(total>2500){
		printf("CONGRATULATION! you earned GOLD VOUNCHER ");
	}
	
	return 0;
}

