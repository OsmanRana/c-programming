#include<stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  if(n >= 2)
    {
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int min_idx, max_idx;
    for(int i = 0; i < n; i++)
    {
      if(min > a[i])
      {
        min = a[i];
        min_idx = i;
      }
      else if(max < a[i])
      {
        max = a[i];
        max_idx = i;
      }
    }
    for(int i = 0; i < n; i++)
    {
      a[min_idx] = max;
      a[max_idx] = min;
      printf("%d ", a[i]);
    }
  }
  return 0;
}