/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:12:12 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/28 14:33:59 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*destb;
	unsigned int		i;

	destb = dest;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*destb = src[i];
		i++;
		destb++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	*destb = '\0';
	return (dest);
}
