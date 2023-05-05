//Has Return + Parameter
#include<stdio.h>
int sum(int x, int y)
{
  int res = x + y;
  return res;
}
int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  int res = sum (x, y);
  printf("%d\n", res);
  return 0;
}