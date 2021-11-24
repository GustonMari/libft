#include <stdlib.h>
char  *ft_strdup(const char *src)
{
  int i;
  char *dest;

  i = 0;
  while (src[i])
    i++;
  dest = malloc(sizeof(char) * (i + 1));
  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
