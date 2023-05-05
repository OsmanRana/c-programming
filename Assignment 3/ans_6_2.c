#include<stdio.h>
int pass_by_reference(int * x)
{
  *x = 30;
  printf("x from pass by reference function - %d\n", *x);
  return x;
}
int main()
{
  int x;
  scanf("%d", &x);
  pass_by_reference (&x);
  printf("x from main function - %d\n", x);
  printf("Changing the value in pass by reference function,\nalso changed the value of x in main function.");
  return 0;
}