/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:31:36 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/17 21:46:12 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		lens1;
	int		lens2;
	int		l;

	lens1 = 0;
	while (s1[lens1])
		lens1++;
	lens2 = 0;
	while (s2[lens2])
		lens2++;
	p = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	l = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[l])
	{
		p[i] = s2[l];
		i++;
		l++;
	}
	p[i] = '\0';
	return (p);
}
