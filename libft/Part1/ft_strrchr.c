char  *ft_strrchr(const char *s, int c)
{
  int i;
  char *s2;

  s2 = (char *)s;
  i = 0;
  while (s2[i])
    i++;
  while (i != 0)
  {
    if (s2[i] == (char)c)
      return (&s2[i]);
      i--;
  }
  return (0);
}
