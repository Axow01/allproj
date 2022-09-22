/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:23:41 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/21 19:22:19 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*buffer;

	buffer = str;
	while (*buffer != '\0')
	{
		if (*buffer >= 97 && *buffer <= 122)
			*buffer = *buffer - 32;
		buffer++;
	}
	return (str);
}
