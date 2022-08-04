/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:58:56 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 09:45:26 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
	char test[] = "aoifu"; 

	putchar((ft_str_is_numeric(test) % 10 + '0'));
	return 0;
}
*/
