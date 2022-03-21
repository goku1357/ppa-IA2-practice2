#include <stdio.h>
int input_side()
{
  int n;
  scanf("%d",&n);
  return n;

}
int check_scalene(int a, int b, int c)
{
  int cnt=0;
  if(a!=b && a!=c)
  {
    if(b!=c)
    {
      cnt=1;
    }
    
  }

  else
  {
    cnt=0;
  }

}
void output()
{
  int cnt;
  if (cnt==0)
  {
    printf("not scalene");
  }
  else if(cnt==1)
  {
    printf("scalene");
  }
  
}
void main(){
  int cnt,n;
  int a = input_side(n);
  int b = input_side(n);
  int c = input_side(n);
  check_scalene(a,b,c);
  output();
}