/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:05:12 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/21 16:54:10 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	addition_str(char *str)
{
	int	total;

	total = 0;
	while (*str != '\0')
	{
		total = total + (int)*str;
		str++;
	}
	return (total);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	string1 = addition_str(s1);
	int	string2 = addition_str(s2);
	int val;

	val = 0;
	if (string1 > string2)
		val = 1;
	else if (string1 < string2)
		val = -1;
	else if (string1 == string2)
		val = 0;
	return (val);
}
