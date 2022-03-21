#include <stdio.h>

int input()
{
  int n;
  scanf("%d",&n);
  return n;

}


int gcd(int a, int b)
{
  int gcdd;
  for(int i=1;i<=a && i<=b;i++)
  {
    if((a%i==0) && (b%i==0))
    {
      gcdd=i;
    }
  }
  return gcdd;
}



void output(int gcdd)
{
  printf("the GCD is %d",gcdd);
}


int main()
{
  int a,b;
  a=input();
  b=input();
  int gcdd;
  gcdd=gcd(a,b);
  output(gcdd);
}