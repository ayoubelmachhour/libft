/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ayel-mac <ayel-mac@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 23:41:32 by ayel-mac         #+#    #+#              */
/*   Updated: 2026/11/08 21:37:21 by ayel-mac        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lendst = 0;
	lensrc = 0;
	while (dst[lendst] && lendst < size)
		lendst++;
	while (src[lensrc])
		lensrc++;
	if (lendst >= size)
		return (size + lensrc);
	i = lendst;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lendst + lensrc);
}
