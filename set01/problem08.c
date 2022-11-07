#include <stdio.h>
void input_array(int n,int a[n]);
int sum_array(int n,int a[n],int sum);
int main (void)
{
  int n;
  int sum;

  printf("Enter the size of the array:");
  scanf("%d" , &n);
  int a[n];
  input_array(n,a);
  sum=sum_array(n,a,sum);
  //output_array(n,a);
 // printf("%d",sum);
  return 0;
}
input_array(int n ,int a[n])
{
  int i=0;
  printf("Enter numbers\n");
  for(i=0;i<n;i++)
    { 
      scanf("%d" , &a[n]);
    }
}
int sum_array(int n ,int a[n],int sum)
{
  int i=0;
  for(i=0;i<n;i++)
  {
    printf("%d\n",(int)a[i]);
    sum = sum +a[i];
    
   }
  return sum;
}
//output_array(int sum)
//{
  //  printf("The array value is: %d",sum);
//}