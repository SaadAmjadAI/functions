#include<stdio.h>
#include<conio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice){
    return (distance / fuelAverage) * fuelPrice;
}


int main(){
float distance, fuelAverage, fuelPrice;


    printf("Enter the distance (In Kilometers)");
    scanf("%f", &distance);

    printf("Enter fuel average (km/liters)");
    scanf("%f", &fuelAverage);

    printf("Enter the fuel price (Rs/liter)");
    scanf("%f", &fuelPrice);

    
    float fuelCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
     
    
    printf("The fuel cost is: %.2f Rs\n", fuelCost);

    getch();
    return 0;
}
