#include <stdlib.h>
#include <stdio.h>

int ft_lennum(int n)
{
  int count;
  long  nbr;

  nbr = (long)n;
  count = 1;
  if (nbr < 0)
  {
    nbr *= -1;
    count++;
  }
  while (nbr >= 10)
  {
    nbr = nbr / 10;
    count++;
  }
  return (count);
}
char *ft_strrev(char *str, int n)
{
  char  *rev;
  int   i;
  int   j;

  j = ft_lennum(n) - 1;
  i = 0;
  rev = malloc(sizeof(char) * (ft_lennum(n) + 1));
  while (str[i])
  {
    rev[i] = str[j];
    i++;
    j--;
  }
  rev[i] = '\0';
  return (rev);
}
char  *ft_zero(char *str)
{
  str[0] = '0';
  str[1] = '\0';
  return(str);
}
char  *ft_itoa(int n)
{
  long nbr;
  char *str;
  int i;

  i = 0;
  nbr = (long)n;
  str = malloc(sizeof(char) * (ft_lennum(n) + 1));
  if (nbr == 0)
    return(ft_zero(str));
  if (nbr < 0)
    nbr *= -1;
  while (nbr > 0)
  {
    str[i] = (nbr % 10) + '0';
    nbr = nbr / 10;
    i++;
  }
  if (n < 0)
  {
    str[i] = '-';
    str[i + 1] = '\0';
  }
  else
    str[i] = '\0';
  return (ft_strrev(str, n));
}
