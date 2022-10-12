/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:32:26 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/13 02:39:33 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	while (nb > 0)
	{
		res *= nb--;
	}
	return (res);
}
