#include<stdio.h>
#include<string.h>
int is_palindrome(char * s)
{
  int n = strlen(s);
  int i = 0;
  int j = n-1;
  int ans = 1;
  while(i < j)
  {
    if(s[i] != s[j])
    {
      ans = 0;
      break;
    }
    i++;
    j--;
  }
  return ans;
}
int main()
{
  char s[10];
  scanf("%s", s);
  int ans = is_palindrome(s);
  if(ans == 1)
  {
    printf("Palindrome");
  }
  else if(ans == 0)
  {
    printf("Not Palindrome");
  }
  return 0;
}