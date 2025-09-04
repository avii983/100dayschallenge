#include <stdio.h>
/*Q29: Write a program to calculate the factorial of a number.*/

int main(){ int num , num1 , factorial = 1;
            printf("enter the value of number\n");
            scanf("%d" , &num);
            num1 = 1;
            while (num1>0 && num1<=num)
            {factorial *= num1;
            num1 += 1;}
            printf("the value of factorial is %d\n" , factorial);
            return 0;

}