#include <stdio.h>

void main()
{
  int r = 0;

  printf("Enter radius: ");
  scanf("%d",&r);

  printf("The area of the circle with radius %d is %d\n", r, (r*r)*3);
  printf("The diameter of the circle with radius %d is %d\n", r, (r*2));
  printf("The circumference of the circle with radius %d is %d\n", r, (r*2)*3);
}
