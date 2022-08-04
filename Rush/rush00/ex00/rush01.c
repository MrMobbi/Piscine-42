/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:15:08 by synicole          #+#    #+#             */
/*   Updated: 2022/07/16 18:53:46 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_firstline(int x);
void	ft_betweenline(int x);
void	ft_lastline(int x);

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x < 1 || y < 1)
		write(1, "x, y must be greater than 0\n", 28);
	else
	{
		while (i <= y)
		{
			if (i == 1)
				ft_firstline(x);
			else if (i == y)
				ft_lastline(x);
			else
				ft_betweenline(x);
			i++;
		}
	}
}

/* Display first line */
void	ft_firstline(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

/* Display line.s between */
void	ft_betweenline(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

/* Display last line */
void	ft_lastline(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}
