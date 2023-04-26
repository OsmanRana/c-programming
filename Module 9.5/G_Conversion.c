#include<stdio.h>
int main()
{
  char s[100001];
  scanf("%s", s);
  
  for(int i = 0; i < 100001; i++)
  {
    if(s[i] == ',')
    {
      s[i] = ' ';
    }
    for( int j = 97; j <= 122; j++)
    {
      if(s[i] == j)
      {
        s[i] = j -32;
      }
      else if (s[i] == j - 32)
      {
        s[i] = j;
      }
      
    }
  }
  printf("%s",s);
  return 0;
}