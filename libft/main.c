#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"
#include <string.h>
#include <ctype.h>

static char	ft_maj(unsigned int c, char a)
{
	(void)c;
	a = a - 32;
	return (a);
}

static void	ft_del(void *s)
{
	//free(s);
}

static void	*ft_cheucheucheu(void *s)
{
	*(int *)s += '0';
	return (s);
}

static void	ft_cheucheu(void *s)
{
	*(int *)s += 1;
}

static void	ft_zarb(unsigned int i, char *s)
{
	(void)i;
	s -= 32;
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	word;
	int	count;

	count = 0;
	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		if (word == 0)
		{
			if (s[i] != c && word == 0)
			{
				word = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
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
	  char *s9;
	//  char *s2;

	if ((ft_strcmp(av[1], "isalpha") == 0) || ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_ISALPHA===========\n");
		while (i < 127)
		{
			printf("%c = %d, real = %d\n", (char)i, ft_isalpha(i), isalpha(i));
			i++;
		}
	}

	if ((ft_strcmp(av[1], "isdigit") == 0) || ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_ISDIGIT===========\n");
		while (i < 127)
		{
			printf("%c = %d\n", (char)i, ft_isdigit(i));
			i++;
		}
	}

	if ((ft_strcmp(av[1], "isalnum") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_ISALNUM===========\n");
		while (i < 127)
		{
			printf("%c = %d, real = %d\n", (char)i, ft_isalnum(i), isalnum(i));
			i++;
		}
	}

	if ((ft_strcmp(av[1], "isascii") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_ISASCII===========\n");
		while (i < 127)
		{
			printf("%c = %d, real = %d\n", (char)i, ft_isascii(i), isascii(i));
			i++;
		}
	}

	if ((ft_strcmp(av[1], "isprint") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_ISPRINT===========\n");
		while (i < 127)
		{
			printf("%c = %d, real = %d\n", (char)i, ft_isprint(i), isprint(i));
			i++;
		}
	}

	if ((ft_strcmp(av[1], "strlen") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_STRLEN===========\n");
		printf("je suis 9,%ld,%lu\n", ft_strlen("je suis 9"), strlen("je suis 9"));
	}

	if ((ft_strcmp(av[1], "memset") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_MEMSET===========\n");
		//printf("txt=%s\nperso=%s\nreal=%s\n", av[2], (char *)ft_memset(av[2],atoi(av[3]), (size_t)atoi(av[4])), (char *)memset(av[2], atoi(av[3]), (size_t)atoi(av[4])));
		char str1[] = "salut toi ca va";
		char str2[] = "salut toi ca va";

		ft_memset(str1, atoi(av[2]), (size_t)atoi(av[3]));
		memset(str2, atoi(av[2]), (size_t)atoi(av[3]));
		for (i = 0; i < 16; i++)
			printf("%c", str1[i]);
		printf("\n");
		for (i = 0; i < 16; i++)
			printf("%c", str2[i]);
	}

	if ((ft_strcmp(av[1], "bzero") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_BZERO===========\n");
		char str1[] = "salut toi ca va";
		char str2[] = "salut toi ca va";

		ft_bzero(str1, (size_t)atoi(av[2]));
		bzero(str2, (size_t)atoi(av[2]));
		for (i = 0; i < 16; i++)
			printf("%d", str1[i]);
		printf("\n");
		for (i = 0; i < 16; i++)
			printf("%d", str2[i]);
	}
	if ((ft_strcmp(av[1], "memcpy") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_MEMCPY===========\n");
		printf("dest=%s\nsrc=%s\nperso=%s\nreal =%s\n", av[2], av[3], (char *)ft_memcpy(av[2], av[3], (size_t)atoi(av[4])), (char *)memcpy(av[2], av[3], (size_t)atoi(av[4])));
	}

	if ((ft_strcmp(av[1], "memmove") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		char str[] = "salut ca va";
		printf("==========TEST_MEMMOVE===========\n");
		printf("dest=%s\nsrc=%s\nperso=%s\nreal =%s\n", av[2], av[3], (char *)ft_memmove(av[2], av[3], (size_t)atoi(av[4])), (char *)memmove(av[2], av[3], (size_t)atoi(av[4])));
		printf("dest=%s\nsrc=%s\nperso=%s\nreal =%s\n", str, str + 2, (char *)ft_memmove(str, str + 2, (size_t)atoi(av[4])), (char *)memmove(str, str + 2, (size_t)atoi(av[4])));
	}

	if ((ft_strcmp(av[1], "strlcpy") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_STRLCPY===========\n");
		printf("reel = %zu\nperso= %zu\n", strlcpy(av[2], av[3], (size_t)atoi(av[4])), ft_strlcpy(av[2], av[3], ((size_t)atoi(av[4]))));
	}
	if ((ft_strcmp(av[1], "strlcat") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_STRLCAT===========\n");
		printf("reel = %zu\nperso= %zu\n", strlcat(av[2], av[3], (size_t)atoi(av[4])), ft_strlcat(av[2], av[3], ((size_t)atoi(av[4]))));
	}

	if ((ft_strcmp(av[1], "toupper") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_TOUPPER===========\n");
		while (av[2][j])
		{
			printf("%c", (char)ft_toupper(av[2][j]));
			j++;
		}
		printf("\n");
		j = 0;
		while (av[2][j])
		{
			printf("%c", (char)ft_toupper(av[2][j]));
			j++;
		}
	}
	if ((ft_strcmp(av[1], "tolower") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_TOLOWER===========\n");
		while (av[2][j])
		{
			printf("%c", (char)ft_tolower(av[2][j]));
			j++;
		}
		printf("\n");
		j = 0;
		while (av[2][j])
		{
			printf("%c", (char)ft_tolower(av[2][j]));
			j++;
		}
	}
	if ((ft_strcmp(av[1], "strchr") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_STRCHR===========\n");
		printf("perso=%s\n", ft_strchr((const char *)av[2], atoi(av[3])));
		printf("reel =%s\n", strchr((const char *)av[2], atoi(av[3])));
	}
	if ((ft_strcmp(av[1], "strrchr") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_STRRCHR===========\n");
		printf("perso=%s\n", ft_strrchr((const char *)av[2], atoi(av[3])));
		printf("reel =%s\n", strrchr((const char *)av[2], atoi(av[3])));
	}
	if ((ft_strcmp(av[1], "strncmp") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_STRNCMP===========\n");
		printf("perso=%d\n", ft_strncmp((const char *)av[2], (const char *)av[3], atoi(av[4])));
		printf("reel =%d\n", strncmp((const char *)av[2], (const char *)av[3], atoi(av[4])));
	}
	if ((ft_strcmp(av[1], "memchr") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_MEMCHR===========\n");
		printf("perso=%s\n", (char *)ft_memchr((char *)av[2], atoi(av[3]), (size_t)atoi(av[4])));
		printf("reel =%s\n", (char *)memchr((char *)av[2], atoi(av[3]), (size_t)atoi(av[4])));
	}
	if ((ft_strcmp(av[1], "memcmp") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_MEMCMP===========\n");
		printf("perso=%d\n", ft_memcmp(av[2], av[3], (size_t)atoi(av[4])));
		printf("reel =%d\n", memcmp(av[2], av[3], (size_t)atoi(av[4])));
	}

	if ((ft_strcmp(av[1], "strnstr") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_strnstr===========\n");
		printf("perso=%s\n", ft_strnstr(av[2], av[3], (size_t)atoi(av[4])));
		printf("reel =%s\n", strnstr(av[2], av[3], (size_t)atoi(av[4])));
	}

	if ((ft_strcmp(av[1], "atoi") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_atoi===========\n");
		printf("perso=%d\n", ft_atoi(av[2]));
		printf("reel =%d\n", atoi(av[2]));
	}

	if ((ft_strcmp(av[1], "strdup") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_strdup===========\n");
		printf("perso=%s\n", ft_strdup(av[2]));
		printf("reel =%s\n", strdup(av[2]));
		free(ft_strdup(av[2]));
		free(strdup(av[2]));
	}
	if ((ft_strcmp(av[1], "calloc") == 0) ||
		ft_strcmp(av[1], "all") == 0)
	{
		printf("==========TEST_CALLOC===========\n");
		printf("perso=%p\n", ft_calloc((size_t)atoi(av[2]), (size_t)atoi(av[3])));
	  printf("reel =%p\n", calloc((size_t)atoi(av[2]), (size_t)atoi(av[3])));
      free(ft_calloc((size_t)atoi(av[2]), (size_t)atoi(av[3])));
      free(calloc((size_t)atoi(av[2]), (size_t)atoi(av[3])));
	}


// PART 2 ================================================================================================


	if ((ft_strcmp(av[1],"substr") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_SUBSTR===========\n");
		s9 = ft_substr(av[2], (unsigned int)atoi(av[3]), (size_t)atoi(av[4]));
      printf("perso =%s\n", s9);
      free(s9);
  }

  if ((ft_strcmp(av[1],"strjoin") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRJOIN===========\n");
	s9 = ft_strjoin(av[2], av[3]);
      printf("perso =%s\n", s9);
      free(s9);
  }

  if ((ft_strcmp(av[1],"strtrim") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRTRIM===========\n");
	s9 = ft_strtrim(av[2], av[3]);
      printf("perso =%s\n", s9);
      free(s9);
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
if ((ft_strcmp(av[1],"strmapi") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRMAPI===========\n");

	printf("%s\n", ft_strmapi(av[2], &ft_maj)); 
  }
  if ((ft_strcmp(av[1],"striteri") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_STRITERI===========\n");
	s9 = av[2];
	ft_striteri(s9, &ft_zarb);
	printf("%s\n", s9); 
  }
  if ((ft_strcmp(av[1],"putchar") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_PUTCHAR===========\n");
	ft_putchar_fd(av[2][0], atoi(av[3])); 
  }
  if ((ft_strcmp(av[1],"putstr") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_PUTSTR===========\n");
	ft_putstr_fd(av[2], atoi(av[3])); 
  }
  if ((ft_strcmp(av[1],"putendl") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_PUTENDL===========\n");
	ft_putendl_fd(av[2], atoi(av[3])); 
  }
  if ((ft_strcmp(av[1],"putnbr") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_PUTNBR===========\n");
	ft_putnbr_fd(atoi(av[2]), atoi(av[3])); 
  }


//=======================BONUS==================================================================

if ((ft_strcmp(av[1],"lstnew") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTNEW===========\n");
	t_list	*test;
	//char s[] = "salut toi ";
	test = ft_lstnew(av[2]);
	printf("test: %s \n", (char*)test->content);  
	}
	if ((ft_strcmp(av[1],"lstfront") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTFRONT===========\n");
	t_list	*head;
	t_list	*new2;
	t_list	*new3;

	head = ft_lstnew(av[2]);
	new2 = ft_lstnew(av[3]);
	new3 = ft_lstnew(av[4]);
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	while (head)
	{
		printf(" %s\n ", (char *)(head->content));
		head = head->next;
	}
	}
	if ((ft_strcmp(av[1],"lstsize") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTSIZE===========\n");
	t_list	*head;
	t_list	*new2;
	t_list	*new3;

	head = ft_lstnew("2");
	new2 = ft_lstnew("3");
	new3 = ft_lstnew("1");
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	printf("%d\n", ft_lstsize(head));
	}
	if ((ft_strcmp(av[1],"lstlast") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTLAST===========\n");
	t_list	*head;
	t_list	*new2;
	t_list	*new3;
	t_list	*temp;

	head = ft_lstnew("3");
	new2 = ft_lstnew("2");
	new3 = ft_lstnew("1");
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	temp = ft_lstlast(head);
	printf("%s\n", (char *)temp->content);
	}
	if ((ft_strcmp(av[1],"lstback") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTBACK===========\n");
	t_list	*head;
	t_list	*new2;
	t_list	*new3;
	t_list	*new4;

	head = ft_lstnew("3");
	new2 = ft_lstnew("2");
	new3 = ft_lstnew("1");
	new4 = ft_lstnew("4");
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_back(&head, new4);
	while (head)
	{
		printf(" %s\n ", (char *)(head->content));
		head = head->next;
	}
	}
	
	if ((ft_strcmp(av[1],"lstdel") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTDEL===========\n");
	t_list	*head;
	t_list	*new2;
	t_list	*new3;
	t_list	*new4;

	head = ft_lstnew("3");
	new2 = ft_lstnew("2");
	new3 = ft_lstnew("1");
	new4 = ft_lstnew("4");
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_back(&head, new4);
	ft_lstdelone(new4,&ft_del);
	while (head)
	{
		printf(" %s\n ", (char *)(head->content));
		head = head->next;
	}
	}
	
	if ((ft_strcmp(av[1],"lstclear") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTCLEAR===========\n");
t_list	*head;
	t_list	*new2;
	t_list	*new3;
	t_list	*new4;

	head = ft_lstnew("3");
	new2 = ft_lstnew("2");
	new3 = ft_lstnew("1");
	new4 = ft_lstnew("4");
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_back(&head, new4);
	ft_lstclear(&head,&ft_del);
	while (head)
	{
		printf(" %s\n ", (char *)(head->content));
		head = head->next;
	}
	}
	
	if ((ft_strcmp(av[1],"lstiteri") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTITERI===========\n");
	t_list	*head;
	t_list	*new;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	void *p = &a;

	head = ft_lstnew(p);
	p = &b;
	new = ft_lstnew(p);
	ft_lstadd_front(&head, new);
	p = &c;
	new = ft_lstnew(p);
	ft_lstadd_front(&head, new);
	p = &d;
	new = ft_lstnew(p);
	ft_lstadd_back(&head, new);
	ft_lstiter(head,&ft_cheucheu);
	
	while (head)
	{
		printf(" %d\n ", *(int *)(head->content));
		head = head->next;
	}
  }
  	if ((ft_strcmp(av[1],"lstmap") == 0) || ft_strcmp(av[1],"all") == 0)
  {
    printf("==========TEST_LSTMAP===========\n");
t_list	*head;
	t_list	*new;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	void *p = &a;

	head = ft_lstnew(p);
	p = &b;
	new = ft_lstnew(p);
	ft_lstadd_front(&head, new);
	p = &c;
	new = ft_lstnew(p);
	ft_lstadd_front(&head, new);
	p = &d;
	new = ft_lstnew(p);
	ft_lstadd_back(&head, new);
	ft_lstmap(head,&ft_cheucheucheu, &ft_del);
	while (head)
	{
		printf(" %d\n ", *(int *)(head->content));
		head = head->next;
	}
  }
	return (0);
}
