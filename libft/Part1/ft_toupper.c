int ft_toupper(int c)
{
  if (c >= 97 && c <= 127)
    c -= 32;
  return (c);
}
