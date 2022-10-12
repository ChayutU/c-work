/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:56:07 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/12 23:43:52 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c < ' ' || c > '~')
	{
		return (0);
	}
	return (1);
}

void	ft_put_hex(int dec)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (dec > 16)
	{
		ft_put_hex(dec / 16);
		ft_put_hex(dec % 16);
	}
	else
		ft_putchar(hex[dec]);
}

void	ft_print_hex(int dec)
{
	ft_putchar('\\');
	if (dec < 0)
		dec = dec * -1;
	if (dec < 16)
		ft_putchar('0');
	ft_put_hex(dec);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_print_hex(str[i]);
		}
		i++;
	}
}
