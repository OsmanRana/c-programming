#include<stdio.h>
int main()
{
  int a, b, c;
  int min, max;
  scanf("%d %d %d", &a, &b, &c);
  if(a < b && a < c)
  {
    min = a;
  }
  else if (b < a && b < c)
  {
    min = b;
  }
  else
  {
    min = c;
  }
  if(a > b && a > c)
  {
    max = a;
  }
  else if (b > a && b > c)
  {
    max = b;
  }
  else
  {
    max = c;
  }
  if( a == b || a == c || b == c)
  {
    if(a == b)
    {
      if(a < c)
      {
        min = a;
        max = c;
      }
      else
      {
        min = c;
        max = a;
      }
    }
    if(a == c)
    {
      if(a < b)
      {
        min = a;
        max = b;
      }
      else
      {
        min = b;
        max = a;
      }
    }
    if(b == c)
    {
      if(b < a)
      {
        min = b;
        max = a;
      }
      else
      {
        min = a;
        max = b;
      }
    }
  }
  printf("%d %d", min, max);
  return 0;
}