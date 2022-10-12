/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:46:01 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/13 02:19:20 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (i);
}

void	ft_put_base(long dec, char *base, int baseSize)
{
	if (dec > baseSize)
	{
		ft_put_base(dec / baseSize, base, baseSize);
		ft_put_base(dec % baseSize, base, baseSize);
	}
	else
		ft_putchar(base[dec]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	n;

	n = nbr;
	base_size = ft_is_base(base);
	if (base_size > 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		ft_put_base(n, base, base_size);
	}
}
