/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banunes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:29:30 by banunes           #+#    #+#             */
/*   Updated: 2023/09/16 16:34:59 by banunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void	print_matrix(char matrix[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			write(1, &matrix[row][column], 1);
			if (column < 3)
				write(1, " ", 1);
			column++;
		}
		row++;
		write (1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	fill_matrix(argv);
	return (0);
}
