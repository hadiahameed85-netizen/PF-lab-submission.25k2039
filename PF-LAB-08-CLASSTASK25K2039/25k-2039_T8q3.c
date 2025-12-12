#include <stdio.h>

int main(){
	int data[4][5], total[4], expensive=0 , man;
	int i, j;
	
	printf("enter the sale detail:\n ");  //input
	for ( i=0 ; i<4 ; i++){
		for (j=0 ; j<5 ; j++ ){
			printf("%d saleman %d product: ", i+1 , j+1 );
			scanf("%d",&data[i][j]);
			
		    total[i]+= data[i][j];
		}
	}
	
	for(i=0 ; i<4 ; i++){   //process
		for( j=0 ;j<5 ; j++){
			if(data[i][j]>expensive){
				expensive= data[i][j];
				man=i+1;
			}
		}
	}
	
	printf("\n\n%d sold the most expensive product \n",man);  //display
	for(i=0 ; i<4 ;i++){
	    if(total[i]>10000){
	    	printf("Congratulation! 10%% bonus for the %d salesman",i+1);
	    	printf("for more than8 10000 sale\n");
     	}
    }
    
	
	return 0;
}

