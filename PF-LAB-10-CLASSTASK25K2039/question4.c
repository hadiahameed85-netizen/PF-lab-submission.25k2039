#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void booking();
void searchGuest();

int repeat =1;
int main(){
    int n;

    while (repeat==1){
    printf("---------------------------------------------------------\n");
    printf("                          hotel system                         \n");
    printf("---------------------------------------------------------\n");

    printf("1. booking of room\n");
    printf("2. seach for guest\n");
    printf("3.exit\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    
       switch(n){
           case 1:    booking();       break;
           case 2:    searchGuest();       break;
           case 3:    printf("Exiting program...");
                      repeat = 0;       break;
           default:
                printf("invalid choice");
           }
    }

    return 0 ;
}

void booking(){
    char name[100][100];
    int roomNumber, i ,n;

    FILE *fp;
    fp = fopen("hotel.txt", "a");
    
    getchar();
    printf("enter the number of guests:");
    scanf("%d",&n);
    getchar();

    for(i=0 ; i<n ; i++){

        printf("Enter guest name(first name):");
        fgets(name[i], 100 , stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter room number:");
        scanf("%d", &roomNumber);
        getchar();

        fprintf(fp , "%s %d\n", name[i] , roomNumber);
    }

    printf("data entered successfully\n");
    fclose(fp);
}

void searchGuest(){
    char searchName[100], fileName[100];
    int roomnum;

    FILE *fp;
    fp = fopen("hotel.txt", "r");

    if(fp == NULL){
        printf("file is NULL\n");
        return ;
    }

    getchar();
    printf("Enter guest name to search(first name):");
    fgets(searchName, sizeof(searchName) , stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    while(fscanf(fp, "%s %d", fileName, &roomnum)== EOF){
        if(strcmp(searchName , fileName)==0){
            printf("Guest found! Room number is %d\n", roomnum);
            fclose(fp);
            return ;
        }
        else{
            continue;
        }
    }

    printf("Guest not found\n");
    fclose(fp);
    return ;
}