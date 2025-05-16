#include <stdio.h>

int main()
{
   int withdrawal_amount;
   float balance;
   printf("enter the withdrawal amount:");
   scanf("%d",&withdrawal_amount);
   printf("enter the balance:");
   scanf("%f",&balance);
   if(withdrawal_amount%5==0 && withdrawal_amount+0.50<=balance ){
       balance=balance-withdrawal_amount-0.50;
   }
   printf("balance: %.2f\n",balance);
    return 0;
}