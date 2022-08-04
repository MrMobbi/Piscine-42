/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:52:41 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/23 17:18:18 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>
#include<string.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;
	int				size_src;
	int				size_dest;

	i = 0;
	j = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	while (i <= size_src && j < nb)
	{
		dest[size_dest] = src[i];
		i++;
		j++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
/*
int main()
{
	char test1[50] = "Hello, ";
	char test2[50] = "World!";
	char test3[50] = "Hello, ";
	char test4[50] = "World!";

	ft_putstr(ft_strncat(test1, test2, 1));
	printf("%s\n", strncat(test3, test4, 1));

	return 0;
}
*/
