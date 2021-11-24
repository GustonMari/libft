#include <stdlib.h>
int ft_strlen(const char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int  ft_charisset(char c, char const *set)
{
  int i;

  i = 0;
  while (set[i])
  {
    if (set[i] == c)
      return (1);
    i++;
  }
  return (0);
}

char  *ft_strtrim(char const *s1, char const *set)
{
  char *trim;
  int begin;
  int end;
  int i;

  i = 0;
  begin = 0;
  end =ft_strlen(s1);
  while (s1[begin] && ft_charisset(s1[begin], set))
    begin++;
  while (s1[end - 1] && ft_charisset(s1[end - 1], set))
    end--;
  if (end < begin)
    begin = end;
  trim = malloc(sizeof(char) * ((end - begin) + 1));
  if (begin < end)
  {
    while (begin < end)
      trim[i++] = s1[begin++];
  }
  trim[i] = '\0';
  return (trim);
}
