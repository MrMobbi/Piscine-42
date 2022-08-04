/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:12:29 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/27 10:40:36 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>
*/
int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		res = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
	return (res);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_fibonacci(atoi(argv[1])));
	return (0);
}
*/
