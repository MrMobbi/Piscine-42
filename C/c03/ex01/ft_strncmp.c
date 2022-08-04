/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:29:07 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/26 16:01:10 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	j;
	int				sum;

	i = 0;
	j = 1;
	sum = 0;
	while (j <= n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break ;
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			sum = s1[i] - s2[i];
			return (sum);
		}
		else
			sum = 0;
		i++;
		j++;
	}
	return (sum);
}

int main()
{
	char test1[15] = "bonj\200";
	char test2[50] = "bonjour";

	ft_putstr(test1);
	ft_putstr(test2);

	printf("%d\n", ft_strncmp(test1, test2, 10));
	printf("%d\n", strncmp(test1, test2, 10));
	return 0;
}

