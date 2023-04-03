#include<stdio.h>
int main ()
{
  int a = 100000000;
  long long int b = 20000000000;
  float c = 2.123456789;
  double d = 2.123456789;
  printf("%d %lld %f %0.15lf", a, b, c, d);
  return 0;
}