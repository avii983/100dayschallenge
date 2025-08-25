#include <stdio.h>
/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

int main()
{
    int sec, hour, minutes;
    printf("enter the value of time in second");
    scanf("%d", &sec);
    hour = sec / 3600;
    minutes = (sec % 3600) / 60;
    sec = sec % 60;
    printf(" %d:%d:%d\n" , hour , minutes , sec);
    return 0;
}

