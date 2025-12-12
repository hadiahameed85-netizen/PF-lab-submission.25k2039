#include <stdio.h>

int main (){
	int base, exponent, i , answer;
	
	printf("enter a base digit");\
	scanf("%d",&base);
	
	printf("enter a non-negative exponent");
	scanf("%d",&exponent);
	
	
	if(exponent <0){
		printf("enter a valid input");
	}
	else
	{
		
	    answer = base *base;
	    
	    for(i=1; i<=exponent-2 ; i++){
		    answer = answer *base;
	    }
	    
    }
    
    printf("%d exponent %d = %d",base,exponent,answer);
	
	return 0;
}
