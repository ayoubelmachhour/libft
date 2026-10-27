/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 00:48:46 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/17 21:52:23 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (little[i] == '\0')
		return ((char *) & big[i]);
	while (i < len && big[i])
	{
		j = 0;
		k = i;
		while (k < len && big[k] && big[k] == little[j])
		{
			j++;
			k++;
		}
		if (little[j] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}
