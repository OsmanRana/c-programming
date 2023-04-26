#include<stdio.h>
int main()
{
  char s[10];
  scanf("%s", s);
  printf("%s", s);
  int sz = sizeof(s);
  printf("\n");
  printf("%d", sz);
  return 0;
}