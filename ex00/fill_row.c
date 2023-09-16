/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_row.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:46:40 by yahmadi           #+#    #+#             */
/*   Updated: 2023/09/16 15:49:28 by yahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fill_row(char row[4], char rows_references[2])
{
	int		column;
	char	number;

	column = 0;
	number = '1';
	if (rows_references[0] == '4' && rows_references[1] == '1')
	{
		while (column < 4)
		{
			row[column] = number;
			column++;
			number++;
		}
	}
	else
	{
		while (column < 4)
		{
			row[column] = '0';
			column++;
		}
	}
	
}
