/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:05:01 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/22 13:09:43 by mmarcott         ###   ########.fr       */
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

int	ft_find_string()
{

}

char	*ft_strstr(char *str, char *to_find)
{
	char	*strs;
	char	*to_finds;
	int	lengthf;

	strs = str;
	to_finds = to_find;
	return (to_find);
}