#include <stdio.h>
int input_number()
{
  int n;
  scanf("%d",&n);
  return n;
}


int is_composite(int b)
{
  int composite=0;
  for(int i=1;i<b;i++)
  {
    if(i==2)
    {
      continue;
    }
    else if(b%i==0)
    {
      composite=1;
    }
    else
    {
      composite=2;

    } 
  }
  return composite;
}


void output(int b)
{
 int composite; 
 if (composite==1)
 {
   printf("its a composite number");
 }
 else if(composite==2)
 {
   printf("its not composite number");
 }
}

int main()
{
  int a,n;
  a=input_number(n);
  int composite=is_composite(a);
  output(composite);

}