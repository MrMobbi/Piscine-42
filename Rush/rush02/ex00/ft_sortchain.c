/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortchain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:09:33 by vfinocie          #+#    #+#             */
/*   Updated: 2022/07/31 19:10:08 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_arglen(int argc, char **argv);

char	**ft_sortchain(char *argv)
{
	int		i;
	int		j;
	int		n;
	int		k;
	char	*tempchain;
	char	**sortedchain;
	char	**taberror;

	taberror = malloc(sizeof(*taberror) * 1);
	*taberror = malloc(sizeof(*taberror) * 1);
	tempchain = malloc(2000);
	taberror[0][0] = '\0';
	if (!tempchain)
		return (taberror);
	i = 0;
	j = 0;
	n = 1;
	k = 0;
	if (argv[i] <= '0' || argv[i] >= '9')
		return (taberror);
	while (argv[i] != 0 && (argv[i] >= '0' && argv[i] <= '9'))
	{
		tempchain[i] = argv[i];
		i++;
	}
	if (i == 0)
		return (taberror);
	if (i % 3 != 0)
		n = i - (i % 3) - 1;
	i = 0;
	sortedchain = malloc(sizeof(*sortedchain) * 50);
	if (!sortedchain)
		return (taberror);
	while (tempchain[k] != 0)
	{
		sortedchain[i] = malloc(sizeof(*argv) * 4);
		while (n < 4 && tempchain[k] != 0)
		{
			if (!sortedchain[i])
				return (taberror);
			sortedchain[i][j] = tempchain[k];
			printf("%i %c\n", i, sortedchain[i][j]);
			j++;
			k++;
			n++;
		}
		sortedchain[i][j] = 0;
		n = 1;
		j = 0;
		i++;
	}
	return (sortedchain);
}

int	main(int argc, char **argv)
{
	printf("%s\n", (ft_sortchain(argv[1])[0]));
	return (0);
}
