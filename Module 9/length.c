#include<stdio.h>
int main()
{
  char s[10];
  scanf("%s", s);
  printf("%s", s);
  int sz = sizeof(s);
  printf("\n");
  printf("%d", sz);
  int count = 0;
  for(int i = 0; i < 10; i++)
  {
    if(s[i] == '\0')
    {
      break;
    }
    count++;
  }
  printf("\n");
  printf("%d", count);
  return 0;
}