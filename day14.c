#include <stdio.h>
/*Q27: Write a program to print the sum of the first n odd numbers.*/

int main()
{
  int sum = 0 , num , num1 = 1 , count = 1;
  printf("enter the value of num\n");
  scanf("%d", &num);
   while (count <= num)
   {sum += num1;
    num1 += 2;
    count++;}
   printf("the value of your total is %d\n" , sum);
    return 0;
}
