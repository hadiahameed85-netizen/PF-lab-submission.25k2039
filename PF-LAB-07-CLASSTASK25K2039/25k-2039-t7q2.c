#include <stdio.h>

int main(){
	int occupancy[7],patients=0,i,j=0;
	
	printf("enter 7 wards occupany(number of patients currently admitted) ");
	for(i=0 ; i<7; i++){
		scanf("%d",&occupancy[i]);
		patients+=occupancy[i];
	}
	
	while(j<=32){  printf("-"); i++; }
	printf("\n ward no \t patients \t catogary \t administrative review");
	while(j<=32){  printf("-"); i++;  }
	
	for(i=0 ; i<7 ;i++){
		printf("\n %d \t %d \t ",i+1,occupancy[i]);
		
		if(occupancy[i]>10){
			printf("Overcrowded \t YES");
		}
		else if(occupancy[i]>=6){
			printf("Stable \t NO");
		}
		else if(occupancy[i]<6 && occupancy[i]>0 ){
			printf("Underutilized \t YES");
		}
		else {
			printf("Invalid input");
		}
    }
	
	return 0;
}
