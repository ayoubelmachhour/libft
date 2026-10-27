/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 01:34:08 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/27 22:21:45 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static int	ft_count(int n)
{
	long	nb;
	int		count;

	count = 1;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;
	long	nb;

	p = malloc(sizeof(char) * (ft_count(n) + 1));
	if (!p)
		return (NULL);
	i = ft_count(n);
	p[i] = '\0';
	i--;
	nb = n;
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		p[0] = '0';
	while (nb)
	{
		p[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (p);
}
