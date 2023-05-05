#include<stdio.h>
int main()
{
  int n, k = 1, l = 1;
  scanf("%d", &n);
  for(int i = 1; i <= 2*n-1; i++)
  {
    for(int j = n-1; j >= l; j--)
    {
      printf(" ");
    }
    
    for(int j = 1; j <= k; j++)
    {
      printf("%d", j);
    }
    
    if(i <= n-1)
    {
      l++;
      k +=2;
    }
    else
    {
      l--;
      k -= 2;
    }
    printf("\n");
  }
  return 0;
}