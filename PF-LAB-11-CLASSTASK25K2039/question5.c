#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct file{
    char filename[100];
    int originalsize;
    int reductionrate;
};

int size(int n, struct file *f){
    if(n==0){
        return f->originalsize;
    }
    else{
        return size(n-1, f) - ((size(n-1, f) * f->reductionrate)/100);
    }
}

int main(){
    struct file f;
    int k;

    printf("enter file name:");
    fgets(f.filename, 100, stdin);
    f.filename[strcspn(f.filename, "\n")] = '\0';

    printf("enter original size:");
    scanf("%d",&f.originalsize);

    printf("enter reduction rate:");
    scanf("%d",&f.reductionrate);

    printf("enter compression round:");
    scanf("%d",&k);

    int final = size(k, &f);

    printf("the final size after %d rounds: %d", k, final);
    
    return 0;
}