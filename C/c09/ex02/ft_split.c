/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:39:39 by mjulliat          #+#    #+#             */
/*   Updated: 2022/08/04 13:22:06 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_count_charset(char *str, char *charset)
{
	int	i;
	int j;
	int	count_charset;

	i = 0;
	j = 0;
	count_charset = 0;
	while (str[i] != '\0')
	{
		while (str[i] == charset[j])
		{
			i++;
			j++;
		}
		if (charset[j] == '\0')
		{
			count_charset++;
			j = 0;
		}
		j = 0;
		i++;
	}
	return (count_charset);
}

int	ft_strlen(char *str, char *charset, int index_str)
{
	int j;
	int	i;

	j = 0;
	i = 0;
	while (str[index_str] != '\0')
	{
		while (str[index_str] == charset[j])
		{
			j++;
			index_str++;
		}
		if (charset[j] == '\0')
			return (i);
		j = 0;
		index_str++;
		i++;
	}
	return (i);
}

void	ft_str_splited(char *str_split, char *str, int index_str, int size_str)
{
	int i;

	i = 0;
	while (i < size_str)
	{
		str_split[i] = str[index_str];
		i++;
		index_str++;
	}
	str_split[i] = '\0';
}

int	ft_find_next_word(char *str, char *charset, int index_str)
{
	int	i;

	i = 0;
	while (str[index_str] != '\0')
	{
		while (str[index_str] == charset[i])
		{
			index_str++;
			i++;
		}
		if (charset[i] == '\0')
			return (index_str);
		else
			index_str = index_str - i;
		i = 0;
		index_str++;	
	}
	return (index_str);
}

char	**ft_split(char	*str, char *charset)
{
	int		compare_charset;
	int		index_str;
	char	**str_split;

	index_str = 0;
	compare_charset	= 0;
	str_split = malloc(sizeof(*str_split) * (ft_count_charset(str, charset) + 1));
	if (!str_split)
		return (NULL);
	while (compare_charset < ft_count_charset(str, charset))
	{
		str_split[compare_charset] = malloc(sizeof(int) * (ft_strlen(str, charset, index_str) + 1));
		ft_str_splited(str_split[compare_charset], str, index_str, ft_strlen(str, charset, index_str));
		index_str = ft_find_next_word(str, charset, index_str);
		compare_charset++;
	}
	str_split[compare_charset] = 0;
	return (str_split);
}

int main(int ac, char **av)
{
	char *test = ", ";
	char **test_split;
	int	i;
	(void) ac;

	i = 0;
	test_split = ft_split(av[1], test);
	while (i < ft_count_charset(av[1], test))
	{
		printf("%s\n", test_split[i]);
		i++;
	}
	return (0);
}
