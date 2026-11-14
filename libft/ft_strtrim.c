/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 22:31:48 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/11/10 18:38:43 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ko(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		l;

	if (!s1 || !set)
		return (NULL);
	l = 0;
	while (s1[l])
		l++;
	i = 0;
	while (ko(s1[i], set) == 1)
		i++;
	if (i == l)
		return (ft_substr(s1, i, 0));
	l--;
	while (ko(s1[l], set) == 1)
		l--;
	p = ft_substr(s1, i, (l - i) + 1);
	return (p);
}
