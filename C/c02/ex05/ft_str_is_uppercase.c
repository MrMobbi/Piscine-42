/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:15:59 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 09:48:16 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char test[] = {'Z','B','Q','R'};

	putchar((ft_str_is_uppercase(test) % 10 + '0'));
	return 0;
}*/
