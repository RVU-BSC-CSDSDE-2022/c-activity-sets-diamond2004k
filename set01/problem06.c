#include <stdio.h>
compare (int a ,int b , int c , int largest)
int main (void)
{
  int a , b , c , largest;
  printf("Enter 1st number:\n");
  scanf("%d" , a);
  printf("Enter 2nd number:\n");
  scanf("%d" , b);
  printf("Enter 3rd number:\n");
  scanf("%d" , c);
}
compare (int a , int b , int c , largest)
{
  if((a>=b)&&(a>=c))
    printf("The largest number is:%d", a);
  else if((b>=a)&&(b>=c))
     printf("The largest number is:%d",b);
  else
     printf("The largest number is: %d",c);
  return 0;
}