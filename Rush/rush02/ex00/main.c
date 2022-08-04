/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:18:07 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/31 19:46:19 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_atribute_numbers(char **strs);
void	ft_print_numbers(char **numbers, char *truc);

int	main(int argc, char **argv)
{
	int		i;
	char	**numbers;
	char	*test = ;
	(void) argc;
	i = 0;
	numbers = ft_atribute_numbers(&argv[1]);
	ft_print_numbers(numbers, test);
	return (0);
}
