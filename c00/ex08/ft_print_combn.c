/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:28:04 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/09 23:07:43 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_table(int *table, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(table[i++] + '0');
	}
}

void	ft_put_delimeter(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_combn(int table[], int n, int i)
{
	if (i == 0)
		table[i] = 0;
	else
		table[i] = table[i - 1] + 1;
	while (table[i] <= 10 - n + i)
	{
		if (i == n - 1)
		{
			ft_put_table(table, n);
			if (table[0] != 10 - n)
			{
				ft_put_delimeter();
			}
		}
		else
		{
			ft_combn(table, n, i + 1);
		}
		table[i] = table[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int	table[10];

	if (n <= 0 || n >= 10)
	{
		return ;
	}
	ft_combn(table, n, 0);
}
