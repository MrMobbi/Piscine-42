/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arglen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:42:41 by vfinocie          #+#    #+#             */
/*   Updated: 2022/07/31 16:13:36 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_arglen(int argc, char **argv)//check argc nb, and return the len with a dictionnary and without. (len does not count the '\0')
{
	int i;

	i = 0;
	if (argc > 3)
		return (0);
	if (argc == 3)
	{
		while (argv[2] != 0)
		{
			i++;
		}
		return (i);
	}
	if (argc == 2)
	{
		while (argv[1] != 0)
		{
			i++;
		}
		return (i);
	}
	return(0);
}
