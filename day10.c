#include <stdio.h>
/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

int main()
{
    int ab, bc, ca;
    printf("enter the value of sides ab bc ca:");
    scanf("%d %d %d", &ab, &bc, &ca);
    if (ab == bc && bc == ca && ca == ab)
        printf("the triangle is equilateral");
    else if (ab == bc || bc == ca || ca == ab)
        printf("the triangle is isosceles");
    else
        printf("the triangle is scalene");
    return 0;
}
