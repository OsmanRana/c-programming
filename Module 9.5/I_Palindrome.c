#include<stdio.h>
#include<string.h>
int main()
{
  char s[1001];
  scanf("%s", s);
  int sz = strlen(s);
  int i = 0;
  int j = sz-1;
  int is_palindrome = 1;
  while(i < j)
  {
    if(s[i] != s[j])
    {
      is_palindrome = 0;
      break;
    }
    i++;
    j--;
  }
  if(is_palindrome == 1)
  {
    printf("YES");
  }
  else if(is_palindrome == 0)
  {
    printf("NO");
  }
  return 0;
}