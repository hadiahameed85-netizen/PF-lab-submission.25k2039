#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxtip(int n, int *tip, int i){
    if(i>=n){
        return 0;
    }
    else{
        int take = tip[i] + maxtip(n, tip, i+2); //skip
        int skip = maxtip(n, tip, i+1);
        return (take > skip) ? take : skip;
    }
}

int main(){
    int n, i;
    printf("enter number of delivery stops:");
    scanf("%d",&n);

    int tip[n];
    printf("Enter tip amount\n");
    for(i=0; i<n; i++){
        printf("enter %d stop tip:",i+1);
        scanf("%d",&tip[i]);
    }

    int result = maxtip(n, tip, 0);

    printf("maximum tip rider can collect is: %d\n",result);

    return 0;
}