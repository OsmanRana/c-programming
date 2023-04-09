#include<stdio.h>
int main()
{
  char x;
  int i;
  int j;
  scanf("%c", &x);
  for(i=65; i <= 90; i++)
  {
    if(i == x)
    {
      char lower = x + 32;
      printf("%c", lower);
    }
  }
  for(j=97; j <= 122; j++)
  {
    if(j == x)
    {
      char upper = x - 32;
      printf("%c\n", upper);
    }
  }
  return 0;
}