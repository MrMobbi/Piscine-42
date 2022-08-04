/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:08:17 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 10:03:04 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

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
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	j = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int main()
{
	int test[6] = {5,8,4,4,7};
	ft_putstr(test);
	write(1, "\n", 1);
	ft_rev_int_tab(test, 5);
	ft_putstr(test);
	return 0;
}
*/
