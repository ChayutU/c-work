/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:28:04 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/10 03:02:16 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_arr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i++] + '0');
	}
}

void	ft_put_delimeter(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_combn(int *arr, int n)
{
	int	i;
	int	l;

	i = 1;
	l = 1;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
			l = 0;
		i++;
	}
	if (l == 1)
	{
		ft_put_arr(arr, n);
		if (arr[0] < 10 - n)
		{
			ft_put_delimeter();
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[10];

	i = 0;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
	while (arr[0] <= 10 - n && (n > 0 && n < 10))
	{
		ft_combn(arr, n);
		arr[n - 1] = arr[n - 1] + 1;
		i = n - 1;
		while (i > 0)
		{
			if (arr[i] > 9)
			{
				arr[i - 1] = arr[i - 1] + 1;
				arr[i] = arr[i - 1];
			}
			i--;
		}
	}
}
