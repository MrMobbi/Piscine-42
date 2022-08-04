/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:41:10 by asouchet          #+#    #+#             */
/*   Updated: 2022/07/31 17:59:53 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char ft_sort_index();
//je sais pas encore comment typer ft_find_words mais dans l'idee c sa on print direct a
// avec ma maniere il faudrait ajouter le facteur hundre,thousand,million etc...

char	*ft_sort_unit_1(int len)
{
	int	a;
	int	b;
	int	c;
	char	units[len];
	char	*spell_numbers;

	units[len - 3] = a;
	units[len - 2] = b;
	units[len - 1] = c;
	if (a != 0)
		spell_numbers = ft_find_words(a);// spell_numbers = nine	
	
	if (b == 1) // donc on check la valeur de c
	{
		ft_return_c_numbers(c); // 19
		strcat(ft_find_words(c), spell_numbers); spell_numbers = nine ... nineteen
	}
	else if (b > 1 && b <= 9)
	{
		strcat(ft_find_words((b * 10)), spell_numbers); // spell_numbers = 9 * 10 donc ninety
		if (c != 0)
			strcat(ft_find_words(c), spell_numbers); // spell_numbers = nine
	}
	return (spell_numbers); //spell_numbers = nine ... ninety nine 
}

int ft_return_c_numbers(int c)
{
	if (c == 0)
		return (10);
	else if (c == 1)
		return (11);
	else if (c == 2)
		return (12);
	else if (c == 3)
		return (13);
	else if (c == 4)
		return (14);
	else if (c == 5)
		return (15);
	else if (c == 6)
		return (16);
	else if (c == 7)
		return (17);
	else if (c == 8)
		return (18);
	else if (c == 9)
		return (19);
	return (c);
}



char *ft_sort_segments(int 



char	ft_sort_index(char **segment, int len)
{
	
}
