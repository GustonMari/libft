/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:45:46 by gmary             #+#    #+#             */
/*   Updated: 2021/11/24 11:48:50 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_maj(unsigned int c, char a)
{
	(void)c;
	a = a - 32;
	return (a);
}

int	ft_len(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * ft_len(s));
	while (s[i])
	{
		new[i] = f(2, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int	main()
{
	printf("%s\n", ft_strmapi("salutcavabien", &ft_maj)); 
	return (0);
}
*/