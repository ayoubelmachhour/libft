/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:07:40 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/15 22:14:59 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	const unsigned char	*s;

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
