#include <stdio.h>
#include <math.h>

int main(){
	int initial=1000, t;
	float annual=0.05 , compound;
	
	for(t=1;t<=10;t++){
		
		compound = initial * pow(1+annual,t);
		printf("the total amount in the account %d year = %.2f \n",t,compound);
			
	}
	
	return 0;
}
