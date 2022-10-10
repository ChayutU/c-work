/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:29:52 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/10 21:54:54 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
		if (size != 0 && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (size != 0)
		dest[i] = '\0';
	return (len);
}
