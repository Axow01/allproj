/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:21:48 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/24 05:13:57 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	addition_str(char *str, unsigned int n)
{
	int	total;
	int	index;

	total = 0;
	index = 0;
	while (*str != '\0' && (unsigned)index != n)
	{
		total = total + (int)*str;
		str++;
		index++;
	}
	return (total);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]) && (unsigned)i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
