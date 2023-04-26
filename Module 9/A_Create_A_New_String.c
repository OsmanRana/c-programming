#include<stdio.h>
#include<string.h>
int main()
{
  char s[1001];
  char t[1001];
  scanf("%s %s", s, t);
  int sz_s = strlen(s);
  int sz_t = strlen(t);
  printf("%d %d\n", sz_s, sz_t);
  printf("%s %s", s, t);
  return 0;
}