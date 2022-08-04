/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:34:58 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/21 13:29:29 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write (1 ,&str[i], 1);
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_src;
	int	size_dest;

	i = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	while (i < size_src)
	{
		dest[size_dest] = src[i];
		i++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
/*
int main()
{
	char test1[50] = "bonjour";
	char test2[50] = ", ca va toi?";

	ft_putstr(ft_strcat(test1, test2));
	return 0;
}
*/
