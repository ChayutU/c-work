/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:08:43 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/10 03:24:08 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum_2digit(int n)
{
	int	f;
	int	s;

	f = n / 10;
	s = n % 10;
	ft_putchar(f + '0');
	ft_putchar(s + '0');
}

void	ft_print_nums(int a, int b)
{
	ft_putnum_2digit(a);
	ft_putchar(' ');
	ft_putnum_2digit(b);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	first;

	i = 0;
	first = 1;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			if (first-- < 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_print_nums(i, j);
			j++;
		}
		i++;
	}
}
