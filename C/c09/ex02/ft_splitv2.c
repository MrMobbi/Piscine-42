/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitv2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:11:00 by mjulliat          #+#    #+#             */
/*   Updated: 2022/08/04 15:31:13 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_charset_or_not(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_charset(char *str, char *charset)
{
	int	count;
	int	i;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_charset_or_not(str[i], charset) == 1)
			count++;
		i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *charset, int index)
{
	int	i;

	i = 0;
	while (str[index] != '\0')
	{
		if (ft_charset_or_not(str[index], charset) == 1)
			break ;
		index++;
		i++;
	}
	return (i);
}

int	ft_find_word(char *str, char *charset, int index)
{
	int	i;

	i = 0;
	while (str[index] != '\0')
	{
		if (ft_charset_or_not(str[index - 1], charset) == 1)
			break ;
		index++;
	}
	return (index);
}

char	**ft_split(char *str, char *charset)
{
	char	**str_splited;
	int		size_charset;
	int		index;
	int		i;
	int		j;
	int		k;

	size_charset = 0;
	index = 0;
	i = 0;
	j = 0;
	k = ft_count_charset(str, charset);
	str_splited = malloc(sizeof(char*) * (ft_count_charset(str, charset) + 1));
	while (size_charset <= k)
	{
		str_splited[size_charset] = malloc(sizeof(*str_splited) * (ft_strlen(str, charset, index) + 1));
		j = ft_strlen(str, charset, index);
		while (i < j)
		{
			str_splited[size_charset][i] = str[index];
			i++;
			index++;
		}
		str_splited[size_charset][i] = '\0';
		i = 0;
		j = 0;
		index = ft_find_word(str, charset, index);
		printf("%s\n", str_splited[size_charset]);
		size_charset++;
	}
	str_splited[size_charset] = 0;
	return (str_splited);
}

int main(int ac, char **av)
{
	char	*test = ", ";
	char	**test_split;
	int	i;
	int j;

	(void) ac;
	i = 0;
	test_split = ft_split(av[1], test);
	printf("\n");
	j = ft_count_charset(av[1], test) + 1;
	while (i < j)
	{
		printf("%s\n", test_split[i]);
		i++;
	}
	return (0);
}
