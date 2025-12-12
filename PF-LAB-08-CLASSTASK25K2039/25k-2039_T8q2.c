#include <stdio.h>

int main(){
	int sudoku[3][3]={{0,2,0},{1,0,0},{0,0,3}};
	int i ,j,counter[9]={0};
	
    for(i=0; i<3 ; i++){  //for initial print
    	for (j=0 ;j<3 ; j++){
    		printf("%d \t",sudoku[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\tReplace ZERO's by (1-9) NUMBERS AND COMPLETE THE TABLE\n"); 
	printf("NOTE: without repetition of same number:\n");
	
	for(i=0; i<3 ; i++){  //for input
		for (j=0 ;j<3 ; j++){
			if(i==0 && j==1 || i==1 && j==0 || i==2 && j==2){
				continue;
			}
			scanf("%d",&sudoku[i][j]);
			switch(sudoku[i][j]){
    			case 1: counter[1]++; break;
    			case 2: counter[2]++; break;
    			case 3: counter[3]++; break;
    			case 4: counter[4]++; break;
    			case 5: counter[5]++; break;
    			case 6: counter[6]++; break;
    			case 7: counter[7]++; break;
    			case 8: counter[8]++; break;
    			case 9: counter[9]++; break;
    			default: printf("invalid");
    	    }
		}
	}
	
	for(i=0; i<3 ; i++){   //again display
    	for (j=0 ;j<3 ; j++){
    		printf("%d \t",sudoku[i][j]);
			}
		printf("\n");
	}
	
	for(i=1; i<=9; i++){
		if(counter[i]>1){
			printf("invalid grid");
			break;
		}
		else if(i==9 && counter[i]==1){
			printf("valid grid");
		}
	}
	
	return 0;
}

