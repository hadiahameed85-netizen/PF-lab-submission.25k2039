#include <stdio.h>

int main(){
	int data[3][3], key[3][3], row=0, column=0;
    int i , j , max=0, encrypted[3][3];
	
	printf("enter first metrix enteries in sequence\n");
	for (i=0 ; i<3 ; i++){
		for(j=0 ;j<3 ; j++){
			scanf("%d",&data[i][j]);
		}
	}
	printf("\n");
	
	printf("enter key metrix enteries in sequence\n");
	for (i=0 ; i<3 ; i++){
		for(j=0 ;j<3 ; j++){
			scanf("%d",&key[i][j]);
		}
	}
	
	for (i=0 ; i<3 ; i++){
		for(j=0 ;j<3 ; j++){
			encrypted[i][j]= (data[i][j] * key[i][j]) + (i+j);
			if(encrypted[i][j]>max){
				max = encrypted[i][j];
				row=i+1;
				column=j+1;
			}
		}
	}
	
	printf("\n\t ENCRYPTED MATRIX\n");
	for (i=0 ; i<3 ; i++){
		for(j=0 ;j<3 ; j++){
			printf("%d\t",encrypted[i][j]);
		}
		printf("\n");
	}
	
	printf("the maximum encrypted value is located in: %d row, %d column\n",row,column);
	return 0;
}

