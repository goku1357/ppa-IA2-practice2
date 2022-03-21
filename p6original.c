#include <stdio.h>
void input_string(char* a)
{
  scanf("%s",a);
}


int str_reverse(char* a)
{
  char rev[10];
  int count=0;
  while (a[count] !='\0')
  {
    count++;
  }
  int j=count-1;

  for(int i=0;i<count;i++)
  {
    rev[i]=a[j];
    j--;
  }
  printf("%s",rev);

}


void output(char* rev)
{
  printf("the reversed word is %s",rev);
}

int main()
{
  char a[10];
  input_string(a);
  str_reverse(a);
  char rev[10];
  output(rev);

}