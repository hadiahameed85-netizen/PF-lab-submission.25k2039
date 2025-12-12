#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char name[20];
	int unit_consumed, i;
	float price_per_unit;
	
	printf("\t ELECTRICITY BILL \n");
	for(i=0;i<=31;i++){
		printf("-");
	}
	
	printf("\n Name : \t");
	fgets(name,20,stdin);

	printf(" Unit consumed : \t");
	scanf("%d",&unit_consumed);
	
	printf(" price per unit : \t");
    scanf("%f",&price_per_unit);
    printf("\n");
    
	for(i=0;i<=31;i++){
		printf("-");
	}
    
    float Total_bill = unit_consumed*price_per_unit;
    printf("\ntotal bill \t : \t %.2f",Total_bill);
    
    
	return 0;
}
