#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	float distance, fuel_used , fuel_price , efficiency , total_cost;
	
	printf("enter distance (km):");
	scanf("%f",&distance);
	
	printf("enter fuel used (liters):");
	scanf("%f",&fuel_used);
	
	printf("enter fuel price per liter:");
	scanf("%f",&fuel_price);
	
	for(i=0;i<=31;i++){
		printf("-");
	}
	printf("\n \t FUEL REPORT \n");
	
	for(i=0;i<=31;i++){
		printf("-");
    }
	
	printf("\n distance (km): %.2f km",distance);
	printf("\n fuel used (liters): %.2f L",fuel_used);
	
	efficiency= distance/ fuel_used; total_cost= fuel_used * fuel_price;
	printf("\n Efficiency: %.2f km/L",efficiency);
	printf("\n total cost: %.2f PKR", total_cost);
	
	return 0;
}
