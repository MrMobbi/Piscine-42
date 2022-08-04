/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:52:45 by mjulliat          #+#    #+#             */
/*   Updated: 2022/08/02 11:22:37 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	square;

	square = 0;
	while (square * square <= nb && square <= 46340)
	{
		if (square * square == nb)
			return (square);
		square++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}

