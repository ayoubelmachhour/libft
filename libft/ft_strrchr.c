/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:22:57 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/11/06 23:35:15 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	if ((unsigned char) s[i] == (unsigned char) c)
		return ((char *) & s[i]);
	i--;
	while (i >= 0)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
		{
			return ((char *) & s[i]);
		}
		i--;
	}
	return (NULL);
}
