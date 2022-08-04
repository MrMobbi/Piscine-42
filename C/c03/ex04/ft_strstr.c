/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:43:28 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/21 18:46:02 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
*/
int	word_or_not(char *str, char *to_find, int reset)
{
	while (*to_find != '\0')
	{
		if (*str == *to_find)
			reset = 0;
		else
		{
			reset = 1;
			break ;
		}
		str++;
		to_find++;
	}
	return (reset);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	reset;

	i = 0;
	reset = 1;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			reset = word_or_not(&str[i], &to_find[0], reset);
		if (reset == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char test1[200] = "coucoucoucb coucg";
	char test2[10] = "coucb";

	ft_putstr(test1);
	ft_putstr(test2);

	printf("%s\n", ft_strstr(test1, test2));
	printf("%s\n", strstr(test1, test2));
	return 0;
}
*/
