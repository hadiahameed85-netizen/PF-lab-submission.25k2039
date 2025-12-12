#include <stdio.h>

void cancelseat(int* , int* , int *);
void bookseat(int* , int* , int *);
void display(int* , int* , int *);

int repeat=1;

int main(){
	int flight1[5]={0}, flight2[7]={0}, flight3[9]={0};
	int option;
	
   while(repeat=1){
   	
	  printf("0. cancel a booking\n");
	  printf("1. book a seat\n");
	  printf("2. exit\n");
	  printf("Enter your choice: ");
	  scanf("%d",&option);
	  
	  switch(option){
	  	case 0:
	  		cancelseat(flight1,flight2,flight3);
	  		break;
	  	case 1:
	  		bookseat(flight1, flight2, flight3);
	  		break;
	  	case 2:
	  		display(flight1 , flight2 , flight3);
	  		break;
	  	default:
	  		printf("invalid input");
	  }
   	  printf("\n\n");
   }
	
	return 0;
}

void cancelseat(int *flight1 , int *flight2 ,int *flight3){
	int flightnumber , seatnumber;
	
	printf("enter the flight number(1-3): ");
	scanf("%d",&flightnumber);
	printf("Enter the seat number: ");
	scanf("%d",&seatnumber);
	
	if(flightnumber==1 && seatnumber<=5){
		flight1[seatnumber-1]=0;	
	    printf("Booking canceled\n");
	}
	else if(flightnumber==2 && seatnumber<=7){
		flight2[seatnumber-1]=0;
		printf("Booking canceled\n");
	}
	else if(flightnumber==3 && seatnumber<=7){
		flight3[seatnumber-1]=0;
		printf("Booking canceled\n");
	}
	else{
		printf("invalid input\n");
	}
	
}

void bookseat(int *flight1 , int *flight2 ,int *flight3){
	int flightnumber , seatnumber;
	
	printf("enter the flight number(1-3): ");
	scanf("%d",&flightnumber);
	printf("Enter the seat number: ");
	scanf("%d",&seatnumber);
	
	if(flightnumber==1 && seatnumber<=5){
		if(flight1[seatnumber-1]==0){
		   flight1[seatnumber-1]=1;
		   printf("Seat booked\n");
	    }else{
	    	printf("NOt availaible\n");
		}
	}
	else if(flightnumber==2 && seatnumber<=7){
		if(flight2[seatnumber-1]==0){
		   flight2[seatnumber-1]=1;
		   printf("Seat booked\n");
	    }else{
	    	printf("NOt availaible\n");
		}
	}
	else if(flightnumber==3 && seatnumber<=7){
		if(flight3[seatnumber-1]==0){
		   flight3[seatnumber-1]=1;
		   printf("Seat booked\n");
	    }else{
	    	printf("NOt availaible\n");
		}

	}
	else{
		printf("invalid input\n");
	}
	
	
}

void display(int *flight1 , int *flight2 ,int *flight3){
	int i;
	
	printf("\nflight 1:\n");
	for(i=0 ; i<5 ; i++){
		printf("%d\t",flight1[i]);
	}
	printf("\nflight 2:\n");
	for(i=0 ; i<7 ; i++){
		printf("%d\t",flight2[i]);
	}
	printf("\nflight 3:\n");
	for(i=0 ; i<9 ; i++){
		printf("%d\t",flight3[i]);
	}
	
}
