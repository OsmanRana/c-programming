#include<stdio.h>
int main()
{
  char x;
  int i, j, k;
  scanf("%c", &x);
  for(i = 48; i <= 122; i++)
  {
    if(i >= 48 && i <= 57 )
    {
      if(i == x)
      {
        printf("IS DIGIT");
      }
    }
    else if (i >= 64 && i <= 90 )
    {
      if(i == x)
      {
        printf("ALPHA\nIS CAPITAL");
      }
    }
    else if (i >= 97 && i <= 122 )
    {
      if(i == x)
      {
        printf("ALPHA\nIS SMALL");
      }
    }
  }
  return 0;
}