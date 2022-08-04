/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_creation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:15:36 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/24 18:36:28 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	**ft_tab_creation(char **tab)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	tab = malloc(sizeof(char *) * 6);
	while (i <= 6)
	{
		tab[i] = malloc(sizeof(char) * 6);
		i++;
	}
	while (x <= 5)
	{
		while (y <= 5)
		{
			tab[x][y] = '0';
			y++;
		}
		x++;
		y = 0;
	}
	return (tab);
}
