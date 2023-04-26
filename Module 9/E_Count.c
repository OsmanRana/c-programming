#include<stdio.h>
int main()
{
  char s[1000000];
  scanf("%s", s);
  int i = 0;
  int sum = 0;
  while(s[i] != '\0')
  {
    sum = sum + (s[i] - 48);
    i++;
  }
  printf("%d", sum);
  return 0;
}