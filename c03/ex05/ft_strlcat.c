/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:39:29 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/12 23:22:29 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	res;
	unsigned int	i;

	dl = 0;
	sl = 0;
	res = 0;
	i = 0;
	while (dest[dl] != '\0')
		dl++;
	while (src[sl] != '\0')
		sl++;
	if (size > dl)
		res = sl + dl;
	else
		res = sl + size;
	while (src[i] && dl < size + 1)
		dest[dl++] = src[i++];
	dest[dl] = '\0';
	return (res);
}
