/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:07:40 by username          #+#    #+#             */
/*   Updated: 2026/11/12 14:39:19 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	const unsigned char	*s;

	if (!s1 && !s2)
		return (0);
	i = 0;
	p = (const unsigned char *) s1;
	s = (const unsigned char *) s2;
	while (i < n)
	{
		if (p[i] != s[i])
		{
			return (p[i] - s[i]);
		}
		i++;
	}
	return (0);
}
