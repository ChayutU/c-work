/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:51:46 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/16 23:04:40 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	res = malloc(max - min - 1 * sizeof(int));
	if (res == NULL)
		return (0);
	while (i < (max - min))
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
