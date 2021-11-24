#include <stdlib.h>
void  *ft_memchr(const void *s, int c, size_t n)
{
  size_t  i;
  char *s2;
  char a;
  
  i = 0;
  s2 = (char *)s;
  a = (char)c;
  while (s2[i] && i < n)
  {
    if (s2[i] == a)
      return(&s2[i]);
    i++;
  }
  return(0);
}
