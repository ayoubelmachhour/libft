/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:22:57 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/24 23:58:55 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	if (s[i] == c)
		return ((char *) & s[i]);
	i--;
	while (i != 0)
	{
		if (s[i] == c)
		{
			return ((char *) & s[i]);
		}
		i--;
	}
	if (s[i] == c)
		return ((char *) & s[i]);
	return (NULL);
}
