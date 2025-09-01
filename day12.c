#include <stdio.h>
/*Q23: Write a program to calculate a library fine based on late days.*/

int main()
{
    int latedays, fine;
    printf("enter the value of late days\n");
    scanf("%d", &latedays);
    switch (latedays)
    {
    case 1 ... 5:
        fine = latedays * 2;
        printf("the value of fine %d₹\n", fine);
        break;
    case 6 ... 10:
        fine = latedays * 4;
        printf("the value of fine %d₹\n", fine);
        break;
    case 11 ... 30:
        fine = latedays * 6;
        printf("the value of fine %d₹\n", fine);
        break;
    case 31:
        printf("membership cancelled");
        break;
    }
    return 0;
}
