#include<stdio.h>
int main()
{
  int n, a;
  scanf("%d", &n);
  int max = 0;
  for(int i = 1; i <= n; i++)
  {
    scanf("%d", &a);
    if(max < a) {
      max = a;
    }
  }
  printf("%d\n", max);
  return 0;
}