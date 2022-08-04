/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:20:23 by mjulliat          #+#    #+#             */
/*   Updated: 2022/08/02 18:19:59 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(*dup) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	while (i < ft_strlen(str))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_tab;
	int			i;

	i = 0;
	s_tab = malloc(sizeof(*s_tab) * (ac + 1));
	if (!s_tab)
		return (NULL);
	while (i < ac)
	{
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		s_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_tab[i].str = 0;
	return (s_tab);
}
