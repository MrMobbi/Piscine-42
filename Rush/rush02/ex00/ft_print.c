/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:57:54 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/31 20:13:57 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i] != (void *)0)
	{
		i++;
	}
	return (i);
}

void	ft_print_numbers(char **numbers, char *truc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(numbers))
	{
		if (numbers[i][j] == truc[j])
		{
			while (numbers[i][j] == truc[j])
			{
				if (truc[j] == '\0' && numbers[i][j] == '\0')
					break ;
				j++;
			}
		}
		if (truc[j] == '\0' && numbers[i][j] == '\0')
		{
			ft_putstr(numbers[i + 1]);
			break ;
		}
		j = 0;
		i++;
	}
}
