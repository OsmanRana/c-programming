#include<stdio.h>
int main()
{
  long long int n, m, k;
  scanf("%lld %lld %lld", &n, &m, &k);
  long long int eye_pair = n / 2;
  long long int kat = 0;
  if(n == 0 || k == 0)
  {
    printf("0");
  }
  else if(m == 0)
  {
    if(eye_pair == k || eye_pair > k)
    {
      printf("%lld\n", k);
    }
    else
    {
      printf("%lld\n", eye_pair);
    }
  }
  else
  {
    if(n == 1 && m == 1 && k == 1)
    {
      printf("1");
    }
    else
    {
      if(n < m && n < k)
      {
        printf("%lld", n);
      }
      else if(m < n && m < k)
      {
        n = n - m;
        k = k - m;
        n = n / 2;
        if(n > 0 && n < k) 
        {
          kat = m + n;
          printf("%lld\n", kat);
        }
        else if(n > 0 && n > k) 
        {
          kat = m + k;
          printf("%lld\n", kat);
        }
        else
        {
          kat = m;
          printf("%lld\n", kat);
        }
      }
      else
      {
        printf("%lld", k);
      }
    }
  }
  return 0;
}