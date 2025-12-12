#include <stdio.h>

void percentage(int attendance[5][30]);

int main(){
	int att[5][30] , i , j;
	
	printf("enter student attendance (1 = present and 0 = Absent)");
	
	for(i=0 ; i<5 ; i++){  //input 
		printf("\nDay %d\n",i+1);
		for(j=0 ; j<30 ; j++){
			printf("Student %d :",j+1);
			scanf("%d",&att[i][j]);
            if(att[i][j] != 0 && att[i][j] != 1){
                printf("invalid input");
                j--;
            }
		}
	}
	
	percentage(att);
	
	
	return 0;
}

void percentage(int attendance[5][30]){
	int i , j, percentage[30];
	int count[30]={0}, defaulter=0;
	
	for(i=0 ; i<5 ; i++){  //attendance counting
		for(j=0 ; j<30 ; j++){
			if(attendance[i][j]==1){
				count[j]++;
			}
			else{
				continue;
			}
		}
	}
	
	for(j=0 ; j<30 ;j++){   // percentage and defaulter counting
		
		percentage[j]= (count[j]*100)/5;
		if(percentage[j]<75){
			defaulter++;
		}	
	}
	
	printf("student \t attendance percentage\n"); //output
	for(j=0 ; j<30 ; j++){
		printf("%d \t\t %d\n",j+1 , percentage[j]);
	}
	printf("number of defaulters: %d\n",defaulter);
}