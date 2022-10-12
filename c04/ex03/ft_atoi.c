/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:00:31 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/13 00:45:16 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	char	*space;

	space = "\t\n\v\f\r ";
	while (*space)
		if (*space++ == c)
			return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				res;
	int				sign;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] != '\0' && ft_is_space(str[i]))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] > '0' && str[i] < '9')
	{
		res = res * 10;
		res = res + str[i++] - '0';
	}
	return (res * sign);
}
