#include<stdio.h>
#include<string.h>
int main()
{
  int test;
  scanf("%d", &test);
  char s[101];
  char first;
  int count = 0;
  char last;
  for(int i = 0; i < test; i++)
  {
    scanf("%s", s);
    int sz = strlen(s);
    if(sz <= 10)
    {
      printf("%s\n", s);
    }
    else
    {
      for(int i = 0; i < sz-1; i++)
      {
        first = s[0];
        last = s[sz-1];
      }
      printf("%c%d%c\n", first, sz-2, last);
    }
  }
  return 0;
}