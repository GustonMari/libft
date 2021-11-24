char  *ft_strchr(const char *s, int c)
{
  int i;
  char *s2;

  s2 = (char *)s;
  i = 0;
  while (s2[i])
  {
    if (s2[i] == (char)c)
    {
      return(&s2[i]);
    }
    i++;
  }
  if (s2[i] == '\0')
    return (&s2[i]);
  return (0);
}
