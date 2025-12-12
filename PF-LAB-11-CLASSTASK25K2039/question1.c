#include<stdio.h>
#include <stdlib.h>

struct building{
    int id;
    int initialheight;
    int growthrate;
} b, *bptr;

int height(unsigned int n, struct building *bptr){
    if(n==0){
        return bptr->initialheight;
    }
    else {
        int prev = height (n-1, bptr);
        int h= prev + ((prev * bptr->growthrate) / 100);
        return h;
    }
}

int main(){
    unsigned int day;
    bptr = &b;
    printf("enter id(only num):");
    scanf("%d",&bptr->id);
    printf("enter initial height:");
    scanf("%d",&bptr->initialheight);
    printf("enter growth rate:");
    scanf("%d",&bptr->growthrate);

    printf("enter day: ");
    scanf("%d",&day);

    int final = height(day , &b);
    printf("the final height is: %d", final);
    return 0;
}