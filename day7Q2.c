#include <stdio.h>

/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.*/

int main()
{
    char ch;
    printf("enter the character:      ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u')
       printf("the character is a vowel");
    else
       printf("the character is a consonant");
    return 0;
}
