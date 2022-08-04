/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:10:15 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/28 10:48:51 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	valeur;
	int	*range;

	i = 0;
	valeur = min;
	if (min >= max)
		return (0);
	range = malloc(sizeof(*range) * (max - min));
	if (!range)
		return (0);
	while (valeur < max)
	{
		range[i] = valeur;
		valeur++;
		i++;
	}
	return (range);
}
/*
int main(int argc, char **argv)
{
	int i;
	int	*range;

	(void) argc;
	i = 0;
	range = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (i < (atoi(argv[2]) -atoi(argv[1])))
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
