#include<stdio.h>

int main(){
	int student[6],invig[6],i ,j=0;
	int  total_student=0 ,total_invig=0;
	
	printf("enter number of students section wise");
	for(i=0 ; i<6 ;i++){
	scanf("%d",&student[i]);
    }
    
    for(i=0 ; i<6 ;i++){
    	
        if(student[i]<=30){
        	invig[i]=1;
        	total_student+=student[i];
        	total_invig+=invig[i];
      	}
     	else if(student[i]<=60){
    	    invig[i]=2;
    	    total_student+=student[i];
    	    total_invig+=invig[i];
	    }
	    else if(student[i]>60){
    	    invig[i]=3;
    	    total_student+=student[i];
    	    total_invig+=invig[i];
	    }
    }
    
    while(j<=32){ printf("-"); j++; }
    printf("\n\tINVIGILATOR ALLOCATION CHART\n");
    while(j<=32){ printf("-"); j++; }
    printf ("\n Section \t student \t assigned invigilator");
    
    for(i=0;i<6 ;i++){
    	printf("\n %d \t\t %d \t\t %d",i+1,student[i],invig[i]);
	}
	printf("\nTotal invigilator : %d",total_invig);
	if(total_student>300){
		printf("\none cheif invigilator assigned");
	}
    
	return 0;
}

