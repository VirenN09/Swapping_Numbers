#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number1,number2,a; //declaring variables
  printf("enter the first number:");
  scanf("%d",&number1);
  printf("enter the second number:");
  scanf("%d",&number2);
  a=number1; //value of first number given to a
  number1=number2; //value of first number given to second number
  number2=a; //finally number2 has number1's value
  printf("first number swaped:%d",number1);
  printf("\n second number swaped:%d",number2);
  return 0;
}
