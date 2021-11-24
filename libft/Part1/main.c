#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int  c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);
void  *ft_memset(void *b, int c, size_t len);
void  ft_bzero(void *s, size_t n);
void  *ft_memcpy(void *dest, void const *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char  *ft_strchr(const char *s, int c);
char  *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void  *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t  n);
char  *ft_strnstr(const char *s, const char *find, size_t len);
int ft_atoi(const char *str);
char  *ft_strdup(const char *src);

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
  
  if ((ft_strcmp(av[1],"isalpha") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_ISALPHA===========\n");
    while (i < 127)
    {
      printf("%c = %d, real = %d\n",(char)i, ft_isalpha(i), isalpha(i));
      i++;
    }
  }
  
  if ((ft_strcmp(av[1],"isdigit") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_ISDIGIT===========\n");
    while (i < 127)
    {
      printf("%c = %d\n",(char)i, ft_isdigit(i));
      i++;
    }
  }
  
  if ((ft_strcmp(av[1],"isalnum") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_ISALNUM===========\n");
    while (i < 127)
    {
      printf("%c = %d, real = %d\n",(char)i, ft_isalnum(i), isalnum(i));
      i++;
    }
  }
  
  if ((ft_strcmp(av[1],"isascii") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_ISASCII===========\n");
    while (i < 127)
    {
      printf("%c = %d, real = %d\n",(char)i, ft_isascii(i), isascii(i));
      i++;
    }
  }
  
  if ((ft_strcmp(av[1],"isprint") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_ISPRINT===========\n");
    while (i < 127)
    {
      printf("%c = %d, real = %d\n",(char)i, ft_isprint(i), isprint(i));
      i++;
    }
  }

  if ((ft_strcmp(av[1],"strlen") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRLEN===========\n");
      printf("je suis 9,%d,%lu\n", ft_strlen("je suis 9"), strlen("je suis 9"));
  }


  if ((ft_strcmp(av[1],"memset") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_MEMSET===========\n");
      printf("txt=%s\nperso=%s\nreal=%s\n", av[2], ft_memset(av[2],atoi(av[3]), (size_t)atoi(av[4])), memset(av[2], atoi(av[3]), (size_t)atoi(av[4])));
  }
  if ((ft_strcmp(av[1],"bzero") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_BZERO===========\n");
    char  str1[] = "salut toi ca va";
    char  str2[] = "salut toi ca va";

    ft_bzero(str1, (size_t)atoi(av[2])); 
    bzero(str2, (size_t)atoi(av[2]));
    for(i = 0 ; i < 16; i++)
      printf("%c", str1[i]);
    printf("\n");
    for(i = 0 ; i < 16; i++)
      printf("%c", str2[i]);
  }
  if ((ft_strcmp(av[1],"memcpy") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_MEMCPY===========\n");
      printf("dest=%s\nsrc=%s\nperso=%s\nreal =%s\n", av[2], av[3], ft_memcpy(av[2],av[3],(size_t)atoi(av[4])),  memcpy(av[2], av[3], (size_t)atoi(av[4])));
  }
  //MEMMOVE PAS FAIT CAR PAS COMPRIS
  if ((ft_strcmp(av[1],"strlcpy") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRLCPY===========\n");
      printf("reel = %lu\nperso= %zu\n", strlcpy(av[2], av[3],( (size_t)atoi(av[4]))), ft_strlcpy(av[2], av[3], ((size_t)atoi(av[4]))));
  }
  if ((ft_strcmp(av[1],"toupper") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_TOUPPER===========\n");
    while (av[2][j])
    {
      printf("%c", (char)ft_toupper(av[2][j]));
      j++;
    }
  }
  if ((ft_strcmp(av[1],"tolower") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_TOLOWER===========\n");
    while (av[2][j])
    {
      printf("%c", (char)ft_tolower(av[2][j]));
      j++;
    }
  }
  if ((ft_strcmp(av[1],"strchr") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRCHR===========\n");
      printf("perso=%s\n", ft_strchr((const char *)av[2], atoi(av[3])));
      printf("reel =%s\n", strchr((const char *)av[2], atoi(av[3])));
  }
  if ((ft_strcmp(av[1],"strrchr") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRRCHR===========\n");
      printf("perso=%s\n", ft_strrchr((const char *)av[2], atoi(av[3])));
      printf("reel =%s\n", strrchr((const char *)av[2], atoi(av[3])));
  }
  if ((ft_strcmp(av[1],"strncmp") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRNCMP===========\n");
      printf("perso=%d\n", ft_strncmp((const char *)av[2],(const char *)av[3], atoi(av[4])));
      printf("reel =%d\n", strncmp((const char *)av[2], (const char *)av[3], atoi(av[4])));
  }
  if ((ft_strcmp(av[1],"memchr") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_MEMCHR===========\n");
      printf("perso=%s\n", ft_memchr((char *)av[2],atoi(av[3]), (size_t)atoi(av[4])));
      printf("reel =%s\n", memchr((char *)av[2], atoi(av[3]), (size_t)atoi(av[4])));
  }
  if ((ft_strcmp(av[1],"memcmp") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_MEMCMP===========\n");
      printf("perso=%d\n", ft_memcmp(av[2],av[3], (size_t)atoi(av[4])));
      printf("reel =%d\n", memcmp(av[2], av[3], (size_t)atoi(av[4])));
  }
  if ((ft_strcmp(av[1],"strnstr") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_strnstr===========\n");
      printf("perso=%s\n", ft_strnstr(av[2],av[3], (size_t)atoi(av[4])));
      printf("reel =%s\n", strnstr(av[2], av[3], (size_t)atoi(av[4])));
  }
  if ((ft_strcmp(av[1],"atoi") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_atoi===========\n");
      printf("perso=%d\n", ft_atoi(av[2]));
      printf("reel =%d\n", atoi(av[2]));
  }
  if ((ft_strcmp(av[1],"strdup") == 0) ||
    ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_strdup===========\n");
      printf("perso=%s\n", ft_strdup(av[2]));
      printf("reel =%s\n", strdup(av[2]));
      free(ft_strdup(av[2]));
      free(strdup(av[2]));
  }
  return (0);
}
