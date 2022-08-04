/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:07:19 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/27 17:11:10 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			sum = s1[i] - s2[i];
			return (sum);
		}
		i++;
	}
	if (s1[i] < s2[i] || s1[i] > s2[i])
	{
		sum = s1[i] - s2[i];
		return (sum);
	}
	return (sum);
}

void	ft_sort_params(char **tab, int size)
{
	int		i;
	int		j;
	char	*str_tmp;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				str_tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = str_tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	(void) argc;
	i = 1;
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
