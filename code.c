#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number1,number2,a;
  printf("enter the first number:");
  scanf("%d",&number1);
  printf("enter the second number:");
  scanf("%d",&number2);
  a=number1;
  number1=number2;
  number2=a;
  printf("first number swaped:%d",number1);
  printf("\n second number swaped:%d",number2);
  return 0;
}
