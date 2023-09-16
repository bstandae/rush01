/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banunes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:14:50 by banunes           #+#    #+#             */
/*   Updated: 2023/09/16 16:45:51 by banunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fill_rows_references(char rows[4][2], char *argv[])
{
	int	up;
	int	down;

	up = 0;
	down = 4;
	while (up < 4 && down < 8)
	{
		rows[up][up] = argv[up];
		rows[up][down] = argv[down];
		up++;
		down++;
	}
}

void	fill_matrix(char *references[])
{
	char	matrix[4][4];
	char	rows_references[4][2];
	int		row;
	int		column;

	row = 0;
	column = 0;
	while (row < 4)
	{
		fill_row(matrix[row]);
		row++;
	}
	print_matrix(matrix);
}
