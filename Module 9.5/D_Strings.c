#include<stdio.h>
#include<string.h>
int main()
{
  char a[11], b[11];
  scanf("%s %s", a, b);
  int sz_a = strlen(a);
  int sz_b = strlen(b);
  char c[11];
  for(int i = 0; i < 11; i++)
  {
    c[i] = a[i];
  }
  strcat(c, b);
  for(int i = 0; i < 11; i++)
  {
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
  }
  printf("%d %d\n%s\n%s %s", sz_a, sz_b, c, a, b);
  return 0;
}