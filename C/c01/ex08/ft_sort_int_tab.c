/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:48:59 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 10:09:57 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *str)
{
	while (*str != '\0')
	{
		putchar((*str % 10) + '0');
		str++;
	}
	write (1, "\n", 1);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
	int test[9] = {4, 3, 7, 1, 6, 8, 2, 1};
	ft_putstr(test);
	ft_sort_int_tab(test, 8);
	ft_putstr(test);
	return 0;
}
*/
