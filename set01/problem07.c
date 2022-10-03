#include <stdio.h>
int main(void)
{
  float n ,i=0 , sum=0 ;
  printf("Enter the first n numbers\n");
  scanf("%f" , &n);
  while (i<=n)
    {
      sum = sum + i;
        i++;
    }
  printf("The sum of %f is: %f" , n , sum);
}