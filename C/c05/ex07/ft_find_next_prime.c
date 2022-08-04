/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:49:17 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/26 16:15:01 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>
*/
int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = nb;
	if (nb <= 2)
		return (2);
	while (i < 2147483647)
	{
		i = 2;
		while (i < j)
		{
			if (j % i == 0)
				break ;
			i++;
		}
		if (i == j)
			return (j);
		j++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/
