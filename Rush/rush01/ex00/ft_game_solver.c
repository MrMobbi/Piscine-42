/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:24:04 by asouchet          #+#    #+#             */
/*   Updated: 2022/07/24 19:22:13 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

							      // 1	       1
int	ft_is_safe_row(char **grid, int row, char num);
//int	ft_is_safe_col(char **grid, int col, char num);
//int	ft_check_condition_l_row(char **grid, int row);
//int	ft_check_condition_r_row(char **grid, int row);
//char	*ft_condition_l_row(char **grid , int row);
//char	*ft_condition_r_row(char **grid , int row);

int	game_solver(char **grid, int row, int col)
{
	char num;

	num = '1';
	if (row == 5)// permet de sortir de la grid 
		return (1);
	if (col > 4 )//permet de naviguer dans les rows
	{
	   row++;
	   col = 1;
	}
	if (grid[row][col] > '0') // permet de naviguer dans les cols
		return (game_solver(grid, row, col + 1));

	while (num <= '4')
	{
		if (ft_is_safe_row(grid, row, num) == 1)//check les doublons
		{	
			grid[row][col] = num;
			if (game_solver (grid, row, col + 1) == 1)// fonction recursive
				return (1); // si c'est juste sort de cette fonction
		}
			
			/*	if (col == 4)
			{
				if(ft_check_condition_l_row(grid, row) == 0 && ft_check_condition_r_row(gird, row) == 0) 
					{
						ft_rearrange_row(grid, row);
						return (game_solver(grid, row, col);
					}
			}*/

		num++;
	}
	return (0);
}
/*
void	ft_rearrange_row(char **grid, int row) <- 	fonction qui devais rearanger l'ordre des nombres
													mais en vrais c'est complexe
{
	char	*left_condition;
	char	*rigth_condition;
	int		x;
	char	vi;
	char	*hb;

	left_condition = ft_condition_l_row(grid, row);
	rigth_condition = ft_condition_r_row(grid, row);
	x = 4;
	vi = '1';
	hb = '0';

}
*/
int	ft_is_safe_row(char **grid, int row, char num)
{
	int	x; 

	x = 1; 
	while (x < 5)
	{
		if (grid[row][x] == num)
			return(0);
		x++;
	}
	return (1);
}
/*
int	ft_is_safe_col(char **grid, int col, char num)
{
	int	x;

	x = 1; 
	while (x < 5)
	{
		if (grid[x][col] == num)
			return(0);
		x++;
	}
	return (1);
}



int	ft_check_condition_l_row(char **grid, int row)
{
	int		x;
	char 	vi;
	char 	*hb;
	char	*condtion;

	x = 0;
	vi = '1';
	hb = '0';
	condition = grid[row][x];
	x += 1;
	if(condition > '0')
		while (x <= 4)
		{
			if (hb < grid[row][x])
			{
				hb = grid[row][x];
				vi += 1;
			}
			x++;
		}
	if (vi == *condition)
		return (1);
	else
		return (0);
}

int	ft_check_condition_r_row(char **grid, int row)
{
	int		x;
	char 	vi;
	char 	*hb;
	char	*condtion;

	x = 5;
	vi = '1';
	hb = '0';
	condition = grid[row][x];
	x -= 1;
	if(condition > '0')
		while (x >= 1)
		{
			if (hb < grid[row][x])
			{
				hb = grid[row][x];
				vi += 1;
			}
			x--;
		}
	if (vi == *condition)
		return (1);
	else
		return (0);
}

char	*ft_condition_l_row(char **grid , int row)
{
	char	*condition;
	int		x;
	
	x = 0;
	condition = grid[row][x];
	return (condition);
}

char	*ft_condition_r_row(char **grid , int row)
{
	char	*condition;
	int		x;
	
	x = 5;
	condition = grid[row][x];
	return (condition);
}

vision 	condition
  1			1
  2		    2
  3			3
  4			4*/
