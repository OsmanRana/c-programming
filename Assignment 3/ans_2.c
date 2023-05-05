#include<stdio.h>
int main()
{
  int n, k = 1, l = 1;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    for(int j = n-1; j >= l; j--)
    {
      printf(" ");
    }
    l++;
    for(int j = 1; j <= k; j++)
    {
      printf("%d", i);
    }
    k++;
    printf("\n");
  }
  return 0;
}