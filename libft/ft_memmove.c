/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:54:38 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/15 01:49:18 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*s;

	p = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (s > p)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((const unsigned char *) src)[i];
			i++;
		}
	}
	else if (p > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *) dest)[i] = ((const unsigned char *) src)[i];
		}
	}
	return (dest);
}
