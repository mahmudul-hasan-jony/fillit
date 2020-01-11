/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismelich <ismelich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 10:47:19 by ismelich          #+#    #+#             */
/*   Updated: 2019/12/04 11:31:35 by ismelich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Returns the floored squareroot.
*/

int		ft_floor_sqrt(int value)
{
	int i;

	while (value > 1)
	{
		i = 1;
		while (i * i <= value)
		{
			if (i * i == value)
				return (i);
			i++;
		}
		value++;
	}
	return (0);
}

/*
** Calculates the number of tetras
*/

int		num_tetra(char ***tetra)
{
	int b;

	b = 0;
	while (tetra[b] != 0)
		b++;
	return (b);
}

/*
** Creates a square matrix filled with dots,
** every row is zero terminated, and last row is equal to NULL.
*/

char	**gen_row(int m, int n, char c)
{
	int		i;
	int		j;
	char	**row;

	i = 0;
	j = 0;
	row = (char**)malloc(sizeof(char*) * (n + 1));
	while (i < n)
	{
		row[i] = (char*)malloc(sizeof(char) * (m + 1));
		while (j < m)
			row[i][j++] = c;
		row[i][j] = 0;
		j = 0;
		i++;
	}
	row[i] = NULL;
	return (row);
}

int		**free_row(char **row)
{
	int	i;

	i = 0;
	while (row[i] != 0)
	{
		free(row[i]);
		i++;
	}
	free(row);
	row = NULL;
	return (0);
}

int		print_row(char **row)
{
	int i;

	i = 0;
	while (row[i] != 0)
	{
		ft_putendl(row[i]);
		i++;
	}
	return (0);
}
