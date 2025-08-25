#include <stdio.h>

/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/

int main() { int k , h , sum=0 , product=0 , difference=0 , quotient=0;
              printf("enter the value of k and h:       ");
              scanf("%d %d" , &k , &h);
              sum = k + h;
              product = k * h;
              difference = k - h;
              printf("the value of sum: %d\n" , sum);
              printf("the value of product: %d\n" , product);
              printf("the value of difference %d\n" , difference);
              if (h>0)
              {quotient = k/h;
              printf("the value of quotient: %d\n" , quotient);}
              if (h<0)
              {quotient = k/h;
               printf("the value of quotient: %d\n" , quotient);}
              if (h==0)
               {printf("the division is not possible");}
              return 0;
              }













