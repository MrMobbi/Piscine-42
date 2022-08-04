/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:23:08 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/22 12:06:40 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (s1[i] != s2[i] || s2[i] != '\0')
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			sum = s1[i] - s2[i];
			return (sum);
		}
		else
			sum = 0;
		i++;
	}
	return (sum);
}
/*
int	main()
{
	char test1[] = "zonjour";
	char test2[] = "zokour";

	ft_putstr(test1);
	ft_putstr(test2);
	printf("%d\n", ft_strcmp(test1, test2));
	return 0;
}
*/
