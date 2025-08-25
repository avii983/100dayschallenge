#include <stdio.h>

/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

int main()
{
  int length, breadth, perimeter, area;
  printf("enter the value of length and breadth:     ");
  scanf("%d %d", &length, &breadth);
  area = length * breadth;
  perimeter = 2 * (length + breadth);
  printf("the value of area %d\n", area);
  printf("the value of perimeter %d\n", perimeter);
  return 0;
}
