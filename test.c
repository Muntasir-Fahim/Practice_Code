/*
    Formula:
    1. F = C*1.8 + 32
    2. C = (F-32) * 5/9

*/

#include<stdio.h>


int main(){
    int n;
    float temp;
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose operation (1-2): ");
    scanf("%d",&n);
    //1 for Celsius to Farenheit
    //2 for Fahrenheit to Celsius
    if(n == 1){
        printf("Enter temperature in Celsius: ");
        scanf("%f",&temp);
        float frh = temp * 1.8 + 32;
        printf("\nIn Fahrenheit %f",frh);

    }
    else if(n == 2){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f",&temp);
        float cls = (temp - 32) * 5/9;
        printf("\nIn Celsius %f",cls);

    }
    else{
        printf("Choose between 1 and 2");
    }
    
}