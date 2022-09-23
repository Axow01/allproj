/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:05:01 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/22 15:33:24 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_found(char *str, char *to_find)
{
	int	length;
	int	i;

	length = ft_strlen(to_find) - 1;
	i = 0;
	while (length >= i)
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*strs;
	char	*to_finds;

	strs = str;
	to_finds = to_find;
	if (*to_find == '\0' || *to_find == 0)
		return (strs);
	while (*strs != '\0')
	{
		if (*strs == *to_find)
		{
			if (is_found(strs, to_find))
				return (strs);
		}
		strs++;
	}
	return (0);
}
