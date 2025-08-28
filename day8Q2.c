#include <stdio.h>

/*Q16: Write a program to input three numbers and find the largest among them using if–else.*/

int main() { int k , h , r;
             printf("enter the value of k h r:         ");
             scanf("%d %d %d" , &k , &h , &r);
            if (h<=k&&r<=k)
               printf("k is the largest value %d\n" , k);
            else if (k<=h&&r<=h)
               printf("h is the largest value %d\n" , h);
            else if (h<=r&&k<=r)
               printf("r is the largest value %d\n" , r);
            return 0;
}

