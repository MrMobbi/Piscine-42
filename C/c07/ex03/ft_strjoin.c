/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:05:09 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/31 11:13:35 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}
*/
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

int	ft_putsep(char *sep, char *str, int i)
{
	int	j;

	j = 0;
	while (j < ft_strlen(sep))
	{
		str[i] = sep[j];
		i++;
		j++;
	}
	return (j);
}

char	*ft_new_str(int size, char *str, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (k < ft_strlen(strs[i]))
		{
			str[j] = strs[i][k];
			j++;
			k++;
		}
		k = 0;
		if (i < size - 1)
			j = j + ft_putsep(sep, str, j);
		i++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_all_str;
	char	*new_str;

	i = 0;
	size_all_str = 0;
	if (size == 0)
	{
		new_str = malloc(sizeof(*new_str) * 1);
		if (!new_str)
			return (new_str = NULL);
		*new_str = '\0';
		return (new_str);
	}
	while (i < size)
	{
		size_all_str = size_all_str + (ft_strlen(strs[i]));
		i++;
	}
	new_str = malloc(sizeof(*new_str) * (size_all_str + \
				(ft_strlen(sep) * size - 1)));
	if (!new_str)
		return (new_str = NULL);
	new_str = ft_new_str(size, new_str, strs, sep);
	return (new_str);
}
/*
int main(int argc, char **argv)
{
	char	*sep = ", TT ,";
	
	(void) argc;
	ft_putstr(ft_strjoin(argc, argv, sep));
	printf("%p\n", ft_strjoin(argc, argv, sep));
	return (0);
}
*/
