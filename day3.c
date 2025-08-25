#include <stdio.h>
/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/

int main() { int cel , fah;
            printf("enter the value of temperature in celcius:      ");
            scanf("%d" , &cel);
            fah = (cel*9/5)+32;
            printf("the value of temperature in fahrenheit %d\n" , fah);
            return 0;
        }
