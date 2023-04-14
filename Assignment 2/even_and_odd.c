#include<stdio.h>
int main()
{
  int n, v;
  scanf("%d", &n);
  int even = 0;
  int odd = 0;
  for( int i = 0; i < n; i++)
  {
    scanf("%d", &v);
    if(v % 2 == 0)
    {
      even += v;
    }
    else
    {
      odd += v;
    }
  }
  printf("%d %d", even, odd);
  return 0;
}