/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:25:20 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/31 17:40:44 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_countn(char *str);
int	ft_word_len(char *str, int index);
int	ft_numbers_len(char *str, int index);
int	ft_find_word(char *str, int i);
int	ft_find_numbers(char *str, int i);

char	*ft_word_in_numbers(char *str, char *numbers, int i)
{
	int	k;
	int	l;

	k = 0;
	l = ft_word_len(str, i);
	while (k < l)
	{
		numbers[k] = str[i];
		i++;
		k++;
	}
	numbers[k] = '\0';
	return (numbers);
}

char	*ft_numbers_in_numbers(char *str, char *numbers, int i)
{
	int	k;
	int	l;

	k = 0;
	l = ft_numbers_len(str, i);
	while (k < l)
	{
		numbers[k] = str[i];
		i++;
		k++;
	}
	numbers[k] = '\0';
	return (numbers);
}

char	**ft_ma_tab(char *str, char **numbers)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i = ft_find_numbers(str, i);
		numbers[j] = malloc(sizeof(*numbers) * (ft_numbers_len(str, i) + 1));
		if (!numbers[j])
			return (0);
		numbers[j] = ft_numbers_in_numbers(str, numbers[j], i);
		j++;
		i = ft_find_word(str, i);
		numbers[j] = malloc(sizeof(*numbers) * (ft_word_len(str, i) + 1));
		if (!numbers[j])
			return (0);
		numbers[j] = ft_word_in_numbers(str, numbers[j], i);
		j++;
		if (j >= (ft_countn(str) * 2))
			break ;
	}
	return (numbers);
}

char	**ft_atribute_numbers(char **strs)
{
	int		fd;
	char	*str;
	char	**numbers;

	str = malloc(sizeof(*str) * 4000);
	if (!str)
		return (0);
	fd = open(*strs, O_RDONLY);
	read(fd, str, 4000);
	numbers = malloc(sizeof(*numbers) * (ft_countn(str) * 2));
	if (!numbers)
		return (0);
	numbers = ft_ma_tab(str, numbers);
	free(str);
	close(fd);
	return (numbers);
	return (0);
}
