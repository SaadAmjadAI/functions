#include <stdio.h>
#include <conio.h>


float remainingBalance(float amount) {
    
    const float FED_RATE = 0.195; 
    const float STATE_RATE = 0.10; 

    
    float totalTax = (amount * FED_RATE) + (amount * STATE_RATE);


    float remainingBalance = amount - totalTax;

    return remainingBalance;
}

int main() {
    float rechargeAmount = 1000.0; 
    float availableBalance = remainingBalance(rechargeAmount);

    printf("Recharge Amount : %.2f PKR\n", rechargeAmount);
    printf("Available Balance : %.2f PKR\n", availableBalance);

    getch();
    return 0;
}