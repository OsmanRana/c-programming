#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  {
    for(int i = 1; i <= 12; i++)
    {
      int mult = n * i;
      printf("%d * %d = %d",n, i, mult);
      printf("\n");
    }
  }
  return 0;
}