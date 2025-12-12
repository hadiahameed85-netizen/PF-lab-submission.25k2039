#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct loan{
    char customerName[100];
    int loanAmount;
    int interestRate;
    int months;
};

void cal_repay(unsigned int n, int installment, int rate, int loan){
    if(loan <=0){
        printf("Loan fully repaid after %d months\n", n);
        return;
    }
    else{
        //int prev cal_repay(n+1, instaliment, rate, loan);
        int newloan = loan - installment + ((loan * rate)/100);
        printf("month%d: loan = %d\n",n,loan);
        cal_repay(n+1, installment, rate, newloan);
    }
    //int prev cal_repay(n-1)
}

int main(){
    struct loan l;
    int monthly;
    printf("enter customer name:");
    fgets(l.customerName, 100, stdin);
    l.customerName [strcspn(l.customerName, "\n")] = '\0';

    printf("enter loan amount:");
    scanf("%d", &l.loanAmount);

    printf("Enter monthly interest rate (%%): ");
    scanf("%d", &l.interestRate);

    printf("Enter fixed monthly installment: ");
    scanf("%d", &monthly);

    cal_repay(1, monthly, l.interestRate, l.loanAmount);

    
    return 0;
}