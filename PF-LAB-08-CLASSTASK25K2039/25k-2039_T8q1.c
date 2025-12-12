#include <stdio.h>

int main(){
	int seating[10][4]={{1,0,1,1},{1,1,1,1},{0,0,1,1},{0,1,0,1},{1,1,1,1},{0,0,0,0},{0,1,0,0},{1,1,1,0},{1,1,1,1},{0,1,0,1}};
	int row , coloumn, i, j ,counter[10]={0};
	
	printf("\t ECONOMY RESERVATION \n");
	printf("enter the seat you want to reserve first row and column :\n");
	scanf("%d %d",&row,&coloumn);

	
	for(i=0 ; i<10 ; i++){
		for(j=0 ; j<4 ; j++){
			if(seating[i][j]==1){ 
				counter[i]++;
			}
		}
	}

    for(i=0 ; i<10 ; i++){    //display
    	for(j=0 ; j<4 ; j++){
    		printf("%d \t",seating[i][j]);
		}
		printf("\n");
	}
	
	
    if(seating[row-1][coloumn-1]==0){
		printf("yes this seat is available\n");
	}else{
		printf("sorry seat is not available\n");
	}
	
	
	for(i=0 ; i<10 ;i++){
		if(counter[i]==4){
			printf("Row %d is fully booked\n",i+1);
		}
	}
	
	return 0;
}

