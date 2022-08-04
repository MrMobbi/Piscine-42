/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:30:25 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/19 17:53:28 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

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
char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (in_word == 1)
				str[i] -= 32;
			in_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			in_word = 0;
		else
			in_word = 1;
		i++;
	}
	return (str);
}
/*
int main()
{
	char test[] = "saLut Mon(lap%in*8888888oux) I+I*U-i, 44t+va bieN ajd?";
	ft_putstr(test);
	ft_putstr(ft_strcapitalize(test));
	return 0;
}
*/
