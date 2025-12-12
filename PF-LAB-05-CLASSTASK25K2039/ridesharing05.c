#include <stdio.h>

int main(){
	int point,discount=0;
	
	printf("enter passenger loyality point: \n");
	scanf("%d",&point);
	
	(point>1000)? printf("discount percentage= 20%%",discount) : printf("discount percentage= 5%%",discount);
	
	
	
	return 0;
}
