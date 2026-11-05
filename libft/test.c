/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:41:28 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/11/05 18:24:51 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	arr[6] = "hello";

	//char	nrr[13] = "worlld";
	ft_putendl_fd(arr, 0);
	write(2, "Error!\n", 7);
	return (0);
}
