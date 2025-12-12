#include <stdio.h>

int main(){
	int payment[15],i, late[15],fine[15], total=0 ,j ;
	
	printf("enter 15 students fee status (if paid press 1 otherwise 0)\n");
	for(i=0 ;i<15 ; i++){
		scanf("%d",&payment[i]);	
	
		switch(payment[i]){
		 	case 0: 
		 	{
		 		printf("how many months late :");
		 		scanf("%d",&late[i]);
		 		if(late[i]==1){
		 			fine[i]=500;
		 			total+=500;
				 }
				else
				{
					fine[i]=1000;
					total+=1000;
				}
		 		break;
			 }
			case 1 :
			{
				fine[i]=0;
				total+=0;
				break;
			}
			default: 
			break;
		 }
	}
	
	for(j=0 ;j<=40 ;j++){  printf("-"); }
	printf("\n student id \t status \t fine \t payment remark \n");
	for(j=0; j<=40; j++){  printf("-");  }
	
	for(i=0 ;i<15 ;i++){
		printf("\n %d \t\t ",i+1);
		if(payment[i]==0){
			printf("unpaid \t %d \t\t",fine[i]);
		}
		else {
			printf("paid \t\t %d \t\t",fine[i]);
		}
		//another if-else for payment remark
		if(payment[i]==1){
			printf("cleared \n");
		}
		else{
			printf("defaulter \n");
		}
	}
	
	printf("\n Total fine: %d",total);
	return 0;
}

