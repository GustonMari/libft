#include <stdlib.h>
char  *ft_strnstr(const char *s, const char *find, size_t len)
{
  size_t  i;
  size_t  j;
  char  *s1;
  char  *to_find;
  
  i = 0;
  s1 = (char *)s;
  to_find = (char *)find;
  if (!*find)
    return (s1);
  while (s1[i] && i < len)
  {
    j = 0;
    if (s1[i + j] == to_find[j])
    {
      while (s1[i + j] == to_find[j])
        j++;
      if (!to_find[j])
        return (&s1[i]);
    }
    i++;
  }
  return (0);
}
