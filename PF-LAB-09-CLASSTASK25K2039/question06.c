#include <stdio.h>

int total_value(int*, int *price , int *stock);
int discount(int*, int *total, int *stock);

int main(){
	int price[5], stock[5], i;
	
	for(i=0 ; i<5 ; i++){
		printf("Enter book %d price and number of copies in stock:",i+1);
		scanf("%d %d",&price[i] , &stock[i]);
	}
	
	int total_amount[5];
	total_value(total_amount, price, stock);

	int discount_applied[5];
	discount(discount_applied, total_amount, stock);

	for(i=0 ; i<5 ; i++){
		printf("Total price of book %d is %d\n",i+1, total_amount[i]);
		printf("Total price(after discount) of book %d is %d \n",i+1, discount_applied[i]);
	}
	
	return 0;
}

int total_value(int *total, int *price , int *stock){
	int i ;

	for(i=0 ; i<5 ; i++){
		total[i] = price[i] * stock[i];
	}

}

int discount(int *discount, int *total, int *stock){
	int i ;
	
	for(i=0 ; i<5 ; i++){
		if(stock[i] <3){
			discount[i]= total[i];
		}
		else if(stock[i]<= 5){
			discount[i]= total[i] - (total[i]*0.10);
		}
		else{
			discount[i]= total[i] - (total[i]*0.10);
		}
	}
	
}