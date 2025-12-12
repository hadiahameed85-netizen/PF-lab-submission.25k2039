#include <stdio.h>

int average(int *rainy_days);

int main(){
	int rainy_days[7], count=0, i;
	
	printf("Enter rainfall data of 7 days (in  millimetres):");
	for(i=0 ; i<7 ;i++){
		scanf("%d",&rainy_days[i]);
	}
	
	int avg = average(rainy_days);
	
	for(i=0 ; i<7 ;i++){
		if(rainy_days[i]>avg){
			count++;
		}
	}
	
	printf("average : %d\n", avg);
	if(count>3){
		printf("Rainy Week");
	}else{
		printf("Normal Week");
	}
	
	return 0;
}

int average(int *rainy_days){
	int sum=0, i;
	
	for(i=0 ; i<7 ;i++){
		sum += rainy_days[i];
	}
	
	return sum/7;
}

