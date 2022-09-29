#include <stdio.h>
sum_calc (int x , int y , int *sum);

int main (void)
{
   int x , y , sum;
  printf("\nEnter the 1st number\n");
  scanf("%d", &x);
  printf("Enter the 2nd number");
  scanf("%d" , &y);
    
  sum_calc(x , y , &sum);
  
  printf("sum is %d" , sum);
  return 0;
}
  sum_calc(int x , int y , int *sum)
{
  *sum = x+y;
}