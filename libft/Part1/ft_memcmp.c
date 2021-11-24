#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t  n)
{
  size_t  i;
  char  *s3;
  char  *s4;

  s3 = (char *)s1;
  s4 = (char *)s2;
  i = 0;
  while (s3[i] && s3[i] == s4[i] && i < (n - 1))
  {
    i++;
  }
  return (s3[i] - s4[i]);
}
