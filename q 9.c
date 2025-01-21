#include <stdio.h>
#include <conio.h>

float internetPackageCost(int GB, char network[]) {
    float cost = 0.0;

    
    if (network[0] == 'Z' || network[0] == 'z') {
        
        if (network[1] == 'o' || network[1] == 'O') {
            cost = GB * 100;
        }
    } else if (network[0] == 'J' || network[0] == 'j') {
        
        if (network[1] == 'a' || network[1] == 'A') {
            cost = GB * 120;
        }
    } else if (network[0] == 'T' || network[0] == 't') {
        
        if (network[1] == 'e' || network[1] == 'E') {
            cost = GB * 90;
        }
    } else {
        printf("Invalid network type.\n");
    }

    return cost;
}

int main() {
    int GB;
    char network[20];

    printf("Enter GB: ");
    scanf("%d", &GB);
    printf("Enter network (Zong, Jazz, Telenor): ");
    scanf("%s", network);

    float cost = internetPackageCost(GB, network);
    printf("Cost = %.2f PKR\n", cost);

    getch();
    return 0;
}