/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chupatha <chupatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 06:01:45 by chupatha          #+#    #+#             */
/*   Updated: 2022/10/10 21:21:40 by chupatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_to_lower_case(char *str, int at)
{
	if (str[at] >= 'A' && str[at] <= 'Z')
		str[at] += 32;
	return (str);
}

char	*ft_to_upper_case(char *str, int at)
{
	if (str[at] >= 'a' && str[at] <= 'z')
		str[at] -= 32;
	return (str);
}

int	ft_is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev;

	i = 0;
	prev = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(prev))
		{
			ft_to_lower_case(str, i);
		}
		else
		{
			ft_to_upper_case(str, i);
		}
		prev = str[i++];
	}
	return (str);
}
