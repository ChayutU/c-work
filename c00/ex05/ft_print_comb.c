/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:01:20 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/10 03:32:14 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_deli(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_num(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_print_deli();
	}
}

void	ft_print_comb(void)
{
	int	fir;
	int	sec;
	int	thr;

	fir = '0';
	while (fir <= '7')
	{
		sec = fir + 1;
		while (sec <= '8')
		{
			thr = sec + 1;
			while (thr <= '9')
			{
				ft_print_num(fir, sec, thr++);
			}
			sec++;
		}
		fir++;
	}
}
