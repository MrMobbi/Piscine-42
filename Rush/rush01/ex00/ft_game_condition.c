/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_condition.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:01:26 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/24 11:56:20 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_cond_in_tab(char *str, char **tab)
{
	int	x;
	int	y;
	int	n;

	x = 0;
	y = 1;
	n = 0;
	while (y <= 4)
	{
		tab[x][y] = str[n];
		n += 2;
		y++;
	}
	x = 5;
	y = 1;
	while (y <= 4)
	{
		tab[x][y] = str[n];
		n += 2;
		y ++;
	}
	return (tab);
}

char	**ft_cond_in_tab2(char *str, char **tab)
{
	int	x;
	int	y;
	int	n;

	x = 1;
	y = 0;
	n = 16;
	while (x <= 4)
	{
		tab[x][y] = str[n];
		n += 2;
		x++;
	}
	x = 1;
	y = 5;
	while (x <= 4)
	{
		tab[x][y] = str[n];
		n += 2;
		x++;
	}
	return (tab);
}
char	**ft_game_condition(char *str, char **tab)
{
	tab = ft_cond_in_tab(str, tab);
	tab = ft_cond_in_tab2(str, tab);
	return (tab);
}
