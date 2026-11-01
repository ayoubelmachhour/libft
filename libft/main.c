/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 00:25:15 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/31 22:45:34 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mac <ayel-mac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 00:22:55 by ayel-mac          #+#    #+#             */
/*   Updated: 2026/10/30 00:24:58 by ayel-mac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*fd = open("ay.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
int				fd;
char	dest[20] = "abcde";
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
printf("%d\n", i);
*/
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_free(void *p)
{
	free(p);
}

void	ft_bn(void *p)
{
	int	*n;

	n = (int *) p;
	*n -= 1;
}

int	main(void)
{
	int		*c;
	int		*v;
	t_list	*p;
	t_list	*x;
	t_list	*n;

	c = malloc(sizeof(int));
	*c = 3456;
	v = malloc(sizeof(int));
	*v = 34;
	p = ft_lstnew(c);
	x = ft_lstnew(v);
	ft_lstadd_back(&p, x);
	printf("%d\n", ft_lstsize(p));
	ft_lstiter(p, ft_bn);
	//n = ft_lstmap(p, ft_bn, ft_free);
	printf("%d\n", *(int *) p->content);
	while (n)
	{
		printf("%d\n", *(int *) n->content);
		n = n->next;
	}
	ft_lstclear(&p, ft_free);
	return (0);
}
