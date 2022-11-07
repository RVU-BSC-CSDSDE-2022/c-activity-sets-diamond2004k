 #include<stdio.h>
#include<math.h>
int main(void)
{
  float n , a;
  printf("Enter the number:");
  scanf("%f" , &n);
  a = sqrt(n);
  printf("The square root of %f is %f", n , a);
  return 0;
}