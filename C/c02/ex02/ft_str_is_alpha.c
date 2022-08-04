/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:09:22 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 09:40:08 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
	char test[] = "8*&hsdkfh";
	putchar((ft_str_is_alpha(test) % 10 + '0'));
	return 0;
}
*/
