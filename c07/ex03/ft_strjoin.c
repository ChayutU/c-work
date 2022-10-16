/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:06:48 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/16 23:52:03 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_len(int size, char **strs, char *sep)
{
	int	final_len;
	int	sep_len;
	int	i;

	sep_len = ft_strlen(sep);
	i = 0;
	final_len = 0;
	while (i < size)
		final_len += ft_strlen(strs[i++]);
	final_len += (size - 1) * sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*pivot;
	int		i;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	res = malloc((ft_final_len(size, strs, sep) + 1) * sizeof(char));
	if (res == NULL)
		return (0);
	pivot = res;
	while (i < size)
	{
		ft_strcpy(pivot, strs[i]);
		pivot += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(pivot, sep);
			pivot += ft_strlen(sep);
		}
		i++;
	}
	*pivot = '\0';
	return (res);
}
