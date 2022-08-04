/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:58:54 by mjulliat          #+#    #+#             */
/*   Updated: 2022/07/24 19:22:08 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_tab(char **tab);
char	**ft_tab_creation(char **tab);
char	**ft_game_condition(char *str, char **tab);
int		game_solver(char **grid, int row, int col);

int	main(int argc, char **argv)
{
	char	**game;
	
	if (argc != 2)
	{
		write (1, "error\n", 6);
		return (0);
	}

	game = ft_tab_creation(game);
	game = ft_game_condition(argv[1], game);
	if(game_solver(game, 1, 1) == 1)
		ft_print_tab(game);
	else
		write (1, "error\n", 6);
		return (0);
}
