#include <stdio.h>

void main()
{
  int a = 0;
  int b = 0;

  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b );

  printf("The sum of %d and %d is %d\n", a,b,a+b );
  printf("The difference of %d and %d is %d\n", a,b,a-b );
  printf("The product of %d and %d is %d\n", a,b,a*b );
  printf("The remainder of %d and %d is %d\n", a,b,a%b );
}
