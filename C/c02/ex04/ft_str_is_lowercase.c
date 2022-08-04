/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:05:58 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 09:47:14 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			i = 1;
		else
		{
			i = 0;
			return (i);
		}
		str++;
	}
	return (i);
}
/*
int main()
{
	char test[] = {'b','0','c','p'};

	putchar((ft_str_is_lowercase(test) % 10 + '0'));
	return 0;
}*/
