#include <stdio.h>

int main(){
	int unit[10],price[10],total_revenue=0 ,flagged=0;
	int i,j=0;
	
	printf("enter electricity usage (in units)");
	for(i=0 ; i<10 ; i++){
		scanf("%d",&unit[i]);
	}
	
	for(i=0 ; i<10 ; i++){
		if(unit[i]<=200){
			price[i]=15*unit[i];
            total_revenue+=price[i];
		}
		else if(unit[i]<=500){
			price[i]=20*unit[i];
            total_revenue+=price[i];
		}
		else if(unit[i]<=700 ){
			price[i]=20*unit[i];
            total_revenue+=price[i];
		}
		else {
			price[i]=20*unit[i];
            total_revenue+=price[i];
			flagged++;
		}
	}
	
	while(j<=32){ printf("-"); j++; }
	printf("\n hounse no \t bill ");
	while(j<=32){ printf("-"); j++; }
	
	for(i=0 ; i<10 ; i++){
		printf("\n %d \t \t %d \t",i+1,price[i]);
		if(unit[i]>700){
			printf("High Consumption ");
		}
	}
	printf("\n Total revenue : %d ",total_revenue);
	printf("\n Number of flagged house : %d ",flagged);
	
	return 0;
}

