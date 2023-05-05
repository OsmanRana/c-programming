//No Return + No Parameter
#include<stdio.h>
void pattern(void)
{
  int n;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    printf("><");
  }
}
int main()
{
  pattern();
  return 0;
}