#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	float egg , bread ,butter, total , subtotal, tax;
	
	printf("\t SHOP RECIEPT \n");
	for(i=0;i<=31;i++){
		printf("-");
	}

	printf("\n egg \t : \t");
	scanf("%f",&egg);

	printf("bread \t : \t");
	scanf("%f",&bread);

	printf("butter \t : \t");
	scanf("%f",&butter);

	for(i=0;i<=31;i++){
		printf("-");
	}
    subtotal=egg+butter+bread; tax=subtotal*0.1; total=subtotal+tax;
    printf("\n subtotal :\t %.2f",subtotal);
    printf("\n tax (10%%) :\t %.2f \n",tax);

    for(i=0;i<=31;i++){
		printf("-");
	}
    printf("\n total : \t %.2f",total);


	return 0;
}
