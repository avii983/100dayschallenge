#include <stdio.h>
/*Q24: Write a program to calculate an electricity bill based on units consumed.*/

int main(){ int unitsconsumed , bill=0;
            printf("enter the value of units used\n");
            scanf("%d" , &unitsconsumed);
            switch (unitsconsumed){ 
                                    case 1 ... 100:
                                     bill = unitsconsumed * 5;
                                     printf("the total amount of your bill is %d\n" , bill);
                                     break;
                                    case 101 ... 200:
                                     bill = ((unitsconsumed - 100) * 7) + (100 * 5);
                                     printf("the total amount of your bill is %d\n" , bill);
                                     break;
                                    case 201 ... 300:
                                     bill = ((unitsconsumed - 200) * 10) + (100 * 7) + (100 * 5);
                                     printf("the total amount of your bill is %d\n" , bill);
                                     break;
                                    default:
                                     bill = ((unitsconsumed - 300) * 12) + (100 * 10) + (100 * 7) + (100 * 5);
                                     printf("the total amount of your bill is %d\n" , bill);
                                     break;
            }                       return 0;
}




















