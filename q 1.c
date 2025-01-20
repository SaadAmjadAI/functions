#include <stdio.h>
#include <conio.h>

float calculate( int units){
    if(units <= 1 && units >= 100){
        return units * 18;
    }else if(units < 100  && units >=200 ){
        return units * 22;
    }else if(units < 200  && units >= 300 ){
        return units * 26  ;
    }else if(units <300  && units >= 700 ){
        return units * 30 ;
}else if(units < 700 ){
        return units * 35 ;
} 

}
int main(){
     int units,result;

    printf(" Enter the units: ");
    scanf("%d",& units );

     result = calculate(units);

    printf("the electricity bill is %d",result);


    getch();
}