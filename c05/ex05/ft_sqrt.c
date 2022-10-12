/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:49:59 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/13 02:55:39 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	sqrt;
	long	i;
	long	j;

	j = 0;
	i = nb;
	if (nb < 0)
		return (0);
	while (j <= i)
	{
		sqrt = (i + j) / 2;
		if (sqrt * sqrt == nb)
			return ((int)sqrt);
		else if (sqrt * sqrt < nb)
			j = sqrt + 1;
		else
			i = sqrt - 1;
	}
	return (0);
}
