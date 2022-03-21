#include<stdio.h>
typedef struct 
{
float base,altitude,area;
}triangle;


triangle input_triangle()
{
  triangle a;
  scanf("%f %f",&a.base,&a.altitude);
  return a;
}

triangle find_area(triangle a)
{
   a.area=(a.base*a.altitude)/2;
   return a;
}

void output(triangle t)
{
  printf("the area of triangle %f",t.area);
}

int main()
{
  triangle d = input_triangle();
  d = find_area(d);
  output(d);
}