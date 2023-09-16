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

void	fill_row(char row[4])
{
	int		column;
	char	number;

	column = 0;
	number = '1';
	while (column < 4)
	{
		row[column] = number;
		column++;
		number++;
	}
}
