#include <stdlib.h>
char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *new;
  unsigned int  i;
  unsigned int  j;

  j = 0;
  i = 0;
  if (start != 0)
    start = start -1;
  while (i < start && s[i])
    i++;
  new = malloc(sizeof(char) * (len + 1));
  if (!new)
    return (NULL);
  while (j <= len && s[i])
  {
    new[j] = s[i];
    i++;
    j++;
  }
  new[j] = '\0';
  return (new);
}
