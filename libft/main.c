/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 00:22:55 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/27 22:06:33 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int				c = 0x12345677;
	unsigned char	*p;
	int				fd;

	p = (unsigned char *) & c;
	fd = open("ay.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	/*char	dest[20] = "abcde";
	int		i;
	printf("%d\n", ft_isdigit(5));
	ft_putchar_fd('a', fd);
	write(2, ft_itoa(1337), 4);
	write(1, "\n", 1);
	printf("%d\n", ft_atoi("1337"));
	printf("%d\n", ft_isalnum(5));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isprint(126));
	printf("%zu\n", ft_strlen("hello"));
	printf("%d\n", ft_toupper('b'));
	printf("%s\n", ft_strchr("hello", 'l'));
	printf("%s\n", ft_strrchr("lheo", 'l'));
	printf("%d\n", ft_strncmp("hello", "helll", 5));
	printf("dst : %s\n", (char *) ft_memmove(str + 2, str, 3));
	printf("%zu\n", ft_strlcat(dest, str, 3));
	ft_bzero(str, 3);
	i = 0;
	while (!str[i] || i < 3)
	i++;
	printf("%d\n", i);*/
	// printf("%x\n", *(p + 1));
	// int	i = 0;
	// while (i < 4)
	// {
	// 	printf("%X\n", p[i]);
	// 	i++;
	// }
	// return (0);
}
