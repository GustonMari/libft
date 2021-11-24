#include <stdlib.h>
size_t ft_len(const char *s)
{
  size_t i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
  size_t i;

  i = 0;
  while(src[i] && (i < dstsize - 1))
  {
    dst[i] = src[i];
    i++;
  }
  return (ft_len(src));
}
