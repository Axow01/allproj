/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:27:57 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/21 19:23:41 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*buffer;

	buffer = str;
	while (*buffer != '\0')
	{
		if (*buffer >= 65 && *buffer <= 90)
			*buffer = *buffer + 32;
		buffer++;
	}
	return (str);
}
