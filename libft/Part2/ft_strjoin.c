#include <stdlib.h>

int ft_len(const char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char  *ft_strjoin(char const *s1, char const *s2)
{
  char  *dest;
  int   i;
  int   j;

  i = 0;
  j = 0;
  dest = malloc(sizeof(char) * (ft_len(s1) + ft_len(s2) + 1));
  if (!dest)
    return (NULL);
  while (s1[i])
  {
    dest[j] = s1[i];
    j++;
    i++;
  }
  i = 0;
  while (s2[i])
  {
    dest[j + i] = s2[i];
    i++;
  }
  dest[j + i] = '\0';
  return (dest);
}
