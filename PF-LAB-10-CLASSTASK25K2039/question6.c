#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char books[10][100], search[100];
    int i , found=0;

    for(i=0 ; i<10 ; i++){   //fo storing 10 books names
        printf("Enter book %d title: ", i+1);
        fgets(books[i], 100, stdin);
        books[i][strcspn(books[i], "\n")] = '\0';
    }

    //user searching for a title
    printf("Enter book title to search: ");
    fgets(search, 100, stdin);
    search[strcspn(search, "\n")] = '\0';

    for(i=0 ; i<10 ; i++){
        if(strcmp(search, books[i]) == 0){
            found=1;
            printf("Book found: %s\n", books[i]);
            break;
        }
        else{
            continue;
        }
    }
    if(found==0){
        printf("book not found\n");
    }
    return 0;
}