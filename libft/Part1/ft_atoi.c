int ft_atoi(const char *str)
{
  int i;
  long  nb;
  long  sign;

  sign = 1;
  i = 0;
  nb = 0;
  if (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
      sign *= -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    nb = (nb * 10) + str[i] - '0';
    i++;
  }
  return ((int)(nb * sign));
}
