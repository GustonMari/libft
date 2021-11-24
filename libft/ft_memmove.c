/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:50:57 by gmary             #+#    #+#             */
/*   Updated: 2021/11/23 17:31:03 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*cp_dst;
	char	*cp_src;

	if (!dest && !src)
		return (NULL);
	cp_dst = (char *)dest;
	cp_src = (char *)src;
	i = -1;
	if ((long)&dest <= (long)&src)
	{
		while (++i <= len)
		{
			cp_dst[i] = cp_src[i];
		}
	}
	else if ((long)&dest > (long)&src)
	{
		while (len > 0)
		{
			cp_dst[len - 1] = cp_src[len - 1];
			len--;
		}
	}
	return (dest);
}
