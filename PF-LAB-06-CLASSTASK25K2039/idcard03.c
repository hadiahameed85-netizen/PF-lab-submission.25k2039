#include <stdio.h>

int main(){
	int divisible, num, i=0;
	
	for (num=2; ; num++){
		
		if(num%3==0 && num%9==0){
			printf("%d \n",num);
			i++;
			if(i==10){
				break;
			}
		}
	}
	
	return 0;
}
