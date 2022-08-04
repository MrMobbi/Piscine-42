/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:59:37 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/27 10:39:02 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>
*/
int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{	
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
*/
