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

void	fill_matrix(char rows_references[4][2], char columns_references[4][2])
{
	char	matrix[4][4];
	int		row;

	row = 0;
	while (row < 4)
	{
		fill_row(matrix[row], rows_references[row]);
		row++;
	}
	print_matrix(matrix);
}
