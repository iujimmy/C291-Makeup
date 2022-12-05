#include <stdio.h>

void main()
{
  int month = 0;
  int year = 0;
  int age = 0;

  printf("Enter current month: ");
  scanf("%d",&month);
  printf("Enter current year: ");
  scanf("%d",&year);
  printf("Enter your age: ");
  scanf("%d",&age);

  printf("It is month %d of year %d and you are %d!\n", month, year, age);


}
