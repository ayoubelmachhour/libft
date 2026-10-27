/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 23:55:28 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/25 16:55:58 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_free(char **p, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		free(p[i]);
		i++;
	}
	free(p);
}

static int	ft_cw(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (count);
}

static char	**ft_sp(char **p, char c, char const *s)
{
	int	i;
	int	count;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count = i;
			while (s[i] && s[i] != c)
				i++;
			p[l] = ft_substr(s, count, (i - count));
			if (!p[l])
			{
				ft_free(p, l);
				return (NULL);
			}
			l++;
		}
		i++;
	}
	p[l] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		cw;

	cw = ft_cw(s, c);
	p = malloc(sizeof(char *) * (cw + 1));
	if (!p)
		return (NULL);
	p = ft_sp(p, c, s);
	return (p);
}
