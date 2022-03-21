#include<stdio.h>
int input_array_size()
{
  int n;
  scanf("%d",&n);
  return n;
}


int input_array(int n, int a[50])
{
  printf("enter numbers");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}


int sum_composite_numbers(int n, int a[50])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==2)
    {
      continue;
    }       
    else if(a[i]%2==0)
    {
      sum+=a[i];
    }
  }
  return sum;
}


void out_put(int sum)
{
   printf(" the sum is %d",sum);

}

int main()
{
  int n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum=sum_composite_numbers(n,a);
  out_put(sum);
}