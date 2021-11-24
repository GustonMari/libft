#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char  *ft_substr(char const *s, unsigned int start, size_t len);
char  *ft_strjoin(char const *s1, char const *s2);
char  *ft_strtrim(char const *s1, char const *set);
int ft_wordcount(char const *s, char c);
char  **ft_split(char const *s, char c);
char  *ft_itoa(int n);

int ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while(s1[i] && s1[i] == s2[i])
    i++;
  return (s1[i] - s2[i]);
}

int main(int ac, char **av)
{
  int i;
  int j;

  j = 0;
  i = 1;
  (void)ac;
//  char *s1;
//  char *s2;
  
  if ((ft_strcmp(av[1],"substr") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_SUBSTR===========\n");

      printf("perso =%s\n", ft_substr(av[2], (unsigned int)atoi(av[3]), (size_t)atoi(av[4])));
      free(ft_substr(av[2], (unsigned int)atoi(av[3]), (size_t)atoi(av[4])));
  }
  if ((ft_strcmp(av[1],"strjoin") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRJOIN===========\n");

      printf("perso =%s\n", ft_strjoin(av[2], av[3]));
      free(ft_strjoin(av[2], av[3]));
  }
  if ((ft_strcmp(av[1],"strtrim") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRTRIM===========\n");

      printf("perso =%s\n", ft_strtrim(av[2], av[3]));
      free(ft_strtrim(av[2], av[3]));
  }
  if ((ft_strcmp(av[1],"split") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_SPLIT===========\n");
    char **tab;
    int i;

    i = 0;
    tab = ft_split((char const *)av[2], (char)av[3][0]);
    while (i < ft_wordcount((char const *)av[2], (char)av[3][0]) + 1)
    {
      printf("%s\n", tab[i]);
      i++;
    }
    free(tab);
  }
  if ((ft_strcmp(av[1],"itoa") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_ITOA===========\n");

      printf("%s\n", ft_itoa(atoi(av[2])));
      free(ft_itoa(atoi(av[2])));
  }
  return (0);
}
