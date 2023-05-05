#include<stdio.h>
int pass_by_value(int x)
{
  x = 30;
  printf("x from pass by value function - %d\n", x);
  return x;
}
int main()
{
  int x;
  scanf("%d", &x);
  pass_by_value (x);
  printf("x from main function - %d\n", x);
  printf("Changing the value in pass by value function,\n did not change the value of x in main function.");
  return 0;
}