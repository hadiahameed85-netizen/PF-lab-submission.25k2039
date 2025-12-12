#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char pass[100];
    int  specialch=0 , upperch=0 , digitch=0; 

    printf("NOTE: password must be at least 8 characters long\n");
    printf("contains at least one uppercase letter\n");
    printf("one lowercase letter, one digit, and one special character\n");
    printf("enter your password: ");
    fgets(pass, 100, stdin);
    pass[strcspn(pass, "\n")]= '\0';
    
    if(strlen(pass)<8){
        printf("password must be at least 8 characters long\n");
        return 0;
    }
    int len = strlen(pass);

    char specialchar[] = "~!@#$^&*()_+`-={}|[]\\:\";'<>?,./";
       for(int i=0 ; i<len ; i++){
           if(strchr(specialchar, pass[i])){
           specialch =1;
           break;
        }
    }

    for(int i=0 ; pass[i]!='\0' ; i++){
        if(isupper(pass[i])){
        upperch =1;
    }
    else if (isdigit(pass[i])){
        digitch =1;
    }
    }


    if(specialch==1 && upperch==1 && digitch==1){
        printf("strong password");
    }
    else if(specialch==1 || upperch==1 || digitch==1){
        printf("Medium password");
    }
    else{
        printf("weak password");
    }
    return 0;
}