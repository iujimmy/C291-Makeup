#include <stdio.h>

void main()
{
  int a = 0;
  int d = 0;
  int n = 0;
  int total = 0;

  printf("Enter the starting number of the series: ");
  scanf("%d",&a);
  printf("Enter the common difference: ");
  scanf("%d",&d);
  printf("Enter the nth term to be found: ");
  scanf("%d",&n );

  total = a + ((n-1)*d);

  printf("The %dth term of the series is: %d\n", n, total);
}
