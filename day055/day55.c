#include <stdio.h>
/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
int main(){ int a , b = 0 , d = 0 , e = 0 , g = 0 , h = 0 , i = 0 , count = 0;
            printf("Enter the length you want in your array\n");
            scanf("%d" , &a);
            int c[a] , f[a];
            while(d < a)
            {
                printf("Enter the next element you want in your array c[%d]\n" , d);
                scanf("%d" , &c[d]);
                d += 1;
            }
            b = a / 2;
            while(e < a)
            {
                if (c[d] != c[e])
                {   
                    d = e;
                    f[g] = c[e];
                    g += 1;

                }
                e += 1;
            }
            while(i <= g)
            {
                if (f[i] == c[h])
                {
                    count += 1;
                }
                if (count > b)
                {
                    printf("The majority element in the array is %d" , f[i]);
                    break;
                }
                h += 1;
                if (h == a - 1)
                {
                    h = 0;
                }
            }
            return 0;

     
}