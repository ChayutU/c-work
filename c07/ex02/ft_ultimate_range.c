/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:02:25 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/16 23:11:50 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*space;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min - 1;
	space = malloc(len * sizeof(int));
	if (space == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = space;
	i = 0;
	while (i <= len)
	{
		space[i] = min + i;
		i++;
	}
	return (len + 1);
}
