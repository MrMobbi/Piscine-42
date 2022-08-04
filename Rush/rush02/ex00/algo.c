/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:23:33 by vfinocie          #+#    #+#             */
/*   Updated: 2022/07/31 22:21:13 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**algo(char **sortedchain)
{
	int len;
	int len2;
	char *algo;
	int j;

	j = 0;
	i = 0;
	algo = malloc(sizeof(*algo) * 500);
	if (!algo)
		return (ERROR);
	*algo = malloc(sizeof(*algo) * 4000);
	if (!*algo)
		return (ERROR);
	len = ft_arglen(sortedchain);
	len2 = ft_arglen(sortedchain);
	while (sortedchain[i] < len)
	{
		while(sortedchain[i][j] =! 0 && j <= 3)
		{
			if (j == 1)
				if (ft_arglen(sortedchain[i][j]) < 3)
					j++;
				else 
					algo[i] = sortedchain[i];
					alogo[i] = ft_index_numbers(len2)
			if (j == 2)
			{
				if (j + 1 == '1')
					algo[i] = "11";
				if (j + 1 == '2')
    				algo[i] == "12";
				if (j + 1 == '3')
				    algo[i] == "13";
				if (j + 1 == '4')
			    	algo[i] == "14";
				if (j + 1 == '5')
				    algo[i] == "15";
				if (j + 1 == '6')
				    algo[i] == "16";
				if (j + 1 == '7')
				    algo[i] == "17";
				if (j + 1 == '8')
				    algo[i] == "18";
				if (j + 1 == '9')
				    algo[i] == "19";
			}
			if (j == 3 && sortechain[i - 1] != '1')
			{
 				if (algo == '1')
                    algo[i] = '1';
				if (algo == '2')
                    algo[i] = '2';
				if (algo == '3')
                    algo[i] = '3';
				if (algo == '4')
                    algo[i] = '4';
				if (algo == '5')
                    algo[i] = '5';
				if (algo == '6')
                    algo[i] = '6';
				if (algo == '7')
                    algo[i] = '7';
				if (algo == '8')
                    algo[i] = '8';
				if (algo == '9')
                    algo[i] = '9';
			}
			j++;
			len2--;
		}
		j = 0;
		i++;
	}
char    *ft_index_numbers(int index)
{
    if (index == 0)
        return ("100");
    else if (index == 1)
        return ("1000");
    else if (index == 2)
        return ("1000000");
    else if (index == 3)
        return ("1000000000");
    else if (index == 4)
        return ("1000000000000");
    else if (index == 5)
        return ("1000000000000000");
    else if (index == 6)
        return ("1000000000000000000");
    else if (index == 7)
        return ("1000000000000000000000");
    else if (index == 8)
        return ("1000000000000000000000000");
    else if (index == 9)
        return ("1000000000000000000000000000");
    else if (index == 10)
        return ("1000000000000000000000000000000");
    else if (index == 11)
        return ("1000000000000000000000000000000000");
    else if (index == 12)
        return ("1000000000000000000000000000000000000");
    return ("0");
}
