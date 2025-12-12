#include<stdio.h>

float* average(int mileage[5][7]);

int main(){
	int mileage[5][7] ,i ,j;
	
	printf("**write mileage of each vehicle upto 7 days**\n");
	for(i=0 ; i<5 ; i++){
		printf("vehicle %d\n",i+1);
		
		for(j=0 ; j<7 ; j++){
			
			printf("day %d:\n ",j+1);
			scanf("%d",&mileage[i][j]);
		}
	}
	float *avg = average(mileage);
	
	for(i=0; i<5; i++){
        if(avg[i] >= 18)
            printf("Vehicle %d: Efficient (%.2f)\n", i+1, avg[i]);
        else if(avg[i] >= 12)
            printf("Vehicle %d: Moderate (%.2f)\n", i+1, avg[i]);
        else
            printf("Vehicle %d: Poor (%.2f)\n", i+1, avg[i]);
    }
	
	
	return 0;
}

float* average( int mileage[5][7]){
	int sum[5]={0}, i , j ;
	static float avg[5];
	
	for(i=0 ; i<5 ; i++){
		for(j=0; j<7 ; j++){
			sum[i] += mileage[i][j];
		}
		avg[i] = sum[i] / 7;
	}
	
	return avg;
}