#include <stdio.h>

int main(){
	int arr[2][3][3], i , j , k, cls,total[2][3]={0};
	int studentA,studentB , maxA=0 ,maxB=0,top, max=0 , classA,classB;
	
	printf("enter marks:");  //input 
	for(i=0; i<2 ;i++){
		printf("\n class %d\n",i+1);
		
		for(j=0 ; j<3 ; j++){
			printf("student %d\n\n",j+1);
			
			for(k=0 ; k<3;k++){
				printf("subjest %d:\t",k+1);
				scanf("%d",&arr[i][j][k]);
				total[i][j]+=arr[i][j][k];
			}
		}
	}
	
	for(i=0 ;i<2; i++){
		for(j=0 ; j<3 ; j++){
				if(i==0 && total[i][j]>maxA){
					maxA=total[i][j];
					studentA=j+1;
					classA=i+1;	
				}
				else if(i==1 && total[i][j]>maxB){
					maxB=total[i][j];
					studentB=j+1;
					classB=i+1;
				}
				
				if(total[i][j]>max){
					max=total[i][j];
					top=j+1;
					cls=i+1;
				}
		}
	} 

	printf("top performer of class %d: student %d with mark %d\n",classA,studentA,maxA);
	printf("top performer of class %d: student %d with mark %d\n",classB,studentB,maxB);
	printf(" overall top performar is from:");
	printf("class %d: student %d with mark %d\n",cls,top,max);
	
	return 0;
}

