/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:50:18 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/29 14:11:10 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab_valeur;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab_valeur = (int *) malloc(sizeof(*tab_valeur) * (max - min));
	if (!tab_valeur)
	{
		tab_valeur = NULL;
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		tab_valeur[i] = min;
		i++;
		min++;
	}
	range[0] = tab_valeur;
	return (i);
}
/*
int main(int argc, char **argv)
{
	int	i;
	int	*range[1];
	int	size_range;

	
	i = 0;
	(void) argc;
	size_range = ft_ultimate_range(range, atoi(argv[1]), atoi(argv[2]));
//	printf("%p\n", range[0]);
//	return (1);
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d\n", range[0][i]);
		i++;
	}
	printf("%d\n",size_range);
	return (0);
}
*/
