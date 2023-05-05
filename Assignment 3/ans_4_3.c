//No Return + Parameter
#include<stdio.h>
void array_print(int *ar, int size)
{
  for(int i = 1; i <= size; i++)
  {
    printf("%d ", ar[i]);
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  int ar[n];
  for(int i = 1; i <= n; i++)
  {
    scanf("%d", &ar[i]);
  }
  array_print(ar, n);
  return 0;
}