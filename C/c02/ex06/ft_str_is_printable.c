/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:19:02 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 19:08:48 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 127)
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
	char test[] = {58,88,89,78,127};

	putchar((ft_str_is_printable(test) % 10 + '0'));
	return 0;
}
*/
