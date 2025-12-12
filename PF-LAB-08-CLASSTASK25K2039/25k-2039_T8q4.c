#include <stdio.h>

int main(){
	int ghouse[3][3][3],i ,j ,k, layer[3]={0}, max=0 ;
	int average[3] , hotest=0 , hot;
	printf("enter temperature:\n");
	for(i=0 ; i<3 ; i++){
		printf("%d layer elements",i+1);
		for(j=0 ; j<3 ; j++){
			for(k=0 ; k<3 ; k++){
			    scanf("%d",&ghouse[i][j][k]);
				layer[i]+=ghouse[i][j][k];
				
				if(ghouse[i][j][k]>max){
					max=ghouse[i][j][k];
				}	
			}
			printf("\n");
		}
		printf("\n\n");
	}
	
	for(i=0 ;i<3 ; i++){
		average[i]=layer[i] / 9 ;
		printf("%d layer average temperature is: %d\n",i+1,average[i]);
		if(average[i]>hotest){
			hotest=average[i];
			hot=i+1;
		}
	}
	printf("hotest layer is: %d layer\n",hot);
	printf("maximum temperature point is: %d",max);

	return 0;
}

