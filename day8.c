#include <stdio.h>
/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

int main()
{
     char ch;
     printf("enter the value of character:               ");
     scanf(" %c", &ch);
     if (ch >= 65 && ch <= 90)
     {
          printf("the character entered is an uppercase letter");
     }
     else if (ch >= 97 && ch <= 122)
     {
          printf("tne character entered is a lowercase letter");
     }
     else if (ch >= 48 && ch <= 57)
     {
          printf("tne character entered is a digit");
     }
     else
     {
          printf("the character entered is a special symbol");
     }
     return 0;
}