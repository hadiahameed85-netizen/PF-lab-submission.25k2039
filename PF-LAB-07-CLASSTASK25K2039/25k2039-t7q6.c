#include <stdio.h>

int main(){
	int count[10],highest, total=0, largest=0,i;
	int day, j;
	float average=0.00;
	
	printf("enter number of posts uploaded in 10 days: ");
	for (i=0 ;i<10 ;i++){
		scanf("%d",&count[i]);
	}
	
	for(i=0 ;i<10 ;i++){
		total+=count[i];
		
		if(count[i]>largest){
			largest=count[i];
			day=i+1;
		} //to find largest value 
		
		
	}
	average=total/10;
	
	for(j=0 ;j<=40 ;j++){  printf("-"); } //table form
	printf("\nWeekly Activity Summary\n");
	for(j=0 ;j<=40 ;j++){  printf("-"); }
	
	printf("\n Day \t post count \n"); //headings
	
	for(i=0 ;i<10 ;i++){
		printf("\n %d \t\t %d \n",i+1,count[i]);
	}
	
	printf("average daily activity: %.2f\n",average);
	printf("HIGHEST ACTIVITY DAY:%d\n",day);
	for(i=0 ;i<8 ;i++){
		    if(count[i]<count[i+1] && count[i+1]<count[i+2]){
		        printf("streak of 3 consecutive increasing: %d,%d,%d \n",i+1,i+2,i+3);
			}
		}
	
	
	return 0;
}
