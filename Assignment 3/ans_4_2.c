//Has Return + No Parameter
#include<stdio.h>
#include<string.h>
int char_count(void)
{
  char word[100];
  scanf("%s", word);
  int size = sizeof(word) / sizeof(char);
  int count = 0;
  for(int i = 0; i < size; i++)
  { 
    if(word[i] == '\0')
    {
      break;
    }
    count++;
  }
  return count;
}
int main()
{
  char count = char_count();
  printf("%d", count);
  return 0;
}