/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:54:38 by username          #+#    #+#             */
/*   Updated: 2026/11/12 14:39:12 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (p < s)
	{
		i = 0;
		while (i < n)
		{
			p[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			p[n] = s[n];
		}
	}
	return (dest);
}
