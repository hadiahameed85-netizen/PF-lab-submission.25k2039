#include<stdio.h>

int main(){
    int i , j;
    
    for(i=1 ; i<=5 ; i++){  //first pattern
    	for(j=1 ;j<=i ; j++){
    		printf("%d",j);
		}
		printf("\n");
	}
	for(i=4 ; i>=1 ; i--){  //second pattern
    	for(j=1 ;j<=i ; j++){
    		printf("%d",j);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=1 ; i<=5 ; i++){  //triangular multiplication pattern
    	for(j=1 ;j<=i ; j++){
    		printf("%d \t",j*i);
		}
		printf("\n");
    }
    
    return 0;
}

