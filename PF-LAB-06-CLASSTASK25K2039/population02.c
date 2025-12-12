#include <stdio.h>

int main(){
	int townA=10000, a=250 , townB=8000 , b=400, i;
	
	for (i=1; ;i++){
    	townA = townA + a ;
	    townB = townB + b ;
	    
	    if(townB>townA){
	    	break;
		}
    }
    
    printf("after %d year town B will surpass town A population \n",i);
    printf("town A population = %d \n",townA);
    printf("town B population = %d",townB);
	
	return 0;
} 
