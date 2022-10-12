/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:54:38 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/13 02:28:15 by chupatha         ###   ########.fr       */
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

int	ft_is_space(char c)
{
	char	*space;

	space = "\t\n\v\f\r ";
	while (*space)
		if (*space++ == c)
			return (1);
	return (0);
}

int	ft_to_n(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int				base_size;
	unsigned int	i;
	int				res;
	int				sign;

	res = 0;
	base_size = ft_is_base(base);
	if (base_size > 1)
	{
		sign = 1;
		i = 0;
		while (str[i] != '\0' && ft_is_space(str[i]))
			i++;
		while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
		{
			if (str[i++] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] != '\0')
			res = (res * base_size) + ft_to_n(str[i++], base);
		return (res * sign);
	}
	return (res);
}
