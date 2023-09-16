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

void	fill_references(char rows[2],char columns[2], int position, char character)
{
	if (position < 5)
		columns[0] = character;
	else if (position < 9)
		columns[1] = character;
	else if (position < 13)
		rows[0] = character;
	else if (position < 17)
		rows[1] = character;
}

int	main(int argc, char *argv[])
{
	char	rows_references[4][2];
	char	columns_references[4][2];
	char c = argv[1][0];
	int	i;
	int j;
	int k;
	i = 0;
	j = 0;
	k = 1;

	while (c != '\0')
	{
		if (c != ' ')
		{
			fill_references(rows_references[j], columns_references[j], k, c);
			k++;
			j++;
			if (j == 4)
				j = 0;
		}
		i++;
		c = argv[1][i];
	}
	fill_matrix(rows_references, columns_references);
	return (0);
}
