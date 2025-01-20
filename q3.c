#include <stdio.h>
#include <conio.h>


float calculateZakat(float totalWealth, float goldRate) {
    
    const float nisabGold = 87.48;
    
    const float zakatRate = 2.5;

    
    float nisabPKR = nisabGold * goldRate;

    
    if (totalWealth >= nisabPKR) {
    
        float zakatPayable = totalWealth * zakatRate;
        return zakatPayable;
    } else {
        return 0;
    }    
} 

int main () {
    
    float goldRate;
    printf("Enter the current gold rate in PKR per gram: ");
    scanf("%f", &goldRate);

    
    float totalWealth;
     printf("Enter the total wealth in PKR : ");
    scanf("%f", &totalWealth);

    
    float zakatPayable = calculateZakat(totalWealth, goldRate);

    
    if (zakatPayable > 0) {
        printf("Zakat Payable: %.2f PKR\n", zakatPayable);
    } else {
        printf("No Zakat Payable.\n");
    }
    
    getch();
    
}