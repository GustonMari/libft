#include<stdlib.h>
#include <stdio.h>
int ft_wordcount(char const *s, char c)
{
  int i;
  int word;
  int count;

  count = 0;
  word = 0;
  i = 0;
  while (s[i])
  {
    if (s[i] == c)
      word = 0;
    if (word == 0)
    {
      if (s[i] != c && word == 0)
      {
        word = 1;
        count++;
      }
    }
      i++;
  }
  return (count);
}
int ft_wordlen(char const *s, char c)
{
  int i;

  i = 0;
  while (s[i] && s[i] != c)
    i++;
  return (i + 1);
}

char  **ft_split(char const *s, char c)
{
  int i;
  int j;
  int k;
  int l;
  char **split;

  k = ft_wordcount(s, c);
  j = 0;
  i = 0;
  split = malloc(sizeof(char *) * (k + 1));
  while (j < k)
  {
    l = 0;
    while (s[i] == c && s[i])
      i++;
    if (s[i] !=c)
    {
      split[j] = malloc(sizeof(char) * ft_wordlen(&s[i], c));
      while (s[i] != c && s[i])
      {
        split[j][l] = s[i];
        i++;
        l++;
      }
      split[j][l] = '\0';
    }
    j++;
  }
  split[j] = 0;
  return (split);
}
