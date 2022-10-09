/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:01:20 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/09 18:54:09 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
}

void	ft_print_comb(void)
{
	int	fir;
	int	sec;
	int	thr;

	fir = '0';
	sec = '1';
	thr = '2';
	ft_print_num(fir++, sec++, thr++);
	while (fir <= '7')
	{
		while (sec <= '8')
		{
			while (thr <= '9')
			{
				ft_print_deli();
				ft_print_num(fir, sec, thr++);
			}
			thr = ++sec + 1;
		}
		sec = ++fir;
	}
}
