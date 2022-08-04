/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:20:56 by vfinocie          #+#    #+#             */
/*   Updated: 2022/07/31 14:39:59 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_word(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' && (str[i] >= 33 && str[i] <= 126))
			return (i);
		i++;
	}
	return (i);
}

int	ft_find_numbers(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	while (str[i] != '\n')
	{
		i++;
	}
	return (i + 1);
}

int	ft_countn(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != 0)
	{
		if (str[i] == '\n')
			n++;
		i++;
	}
	return (n);
}

int	ft_word_len(char *str, int index)
{
	int	i;

	i = 0;
	while (str[index] != '\n' || '\0')
	{
		i++;
		index++;
	}
	return (i);
}

int	ft_numbers_len(char *str, int index)
{
	int	i;

	i = 0;
	while (str[index] != ':')
	{
		if (str[index] >= '0' && str[index] <= '9')
			i++;
		index++;
	}
	return (i);
}
