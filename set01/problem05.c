#include <stdio.h>
int main (void)
{
  int a , b , c;
  printf("Enter the 1st number:\n");
  scanf("%d", &a);
  printf("Enter the 2nd number:\n");
  scanf("%d", &b);
  printf("Enter the 3rd number:\n");
  scanf("%d", &c);
  if((a>=b)&&(a>=c))
    printf("The largest number is:%d", a);
  else if((b>=a)&&(b>=c))
     printf("The largest number is:%d",b);
  else
     printf("The largest number is: %d",c);
  return 0;
}