/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:42:57 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/24 07:30:46 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_pair(int nb)
{
	if (nb % 2 == 0)
		return (1);
	else
		return (0);
}

int	check_sign(char *str, char sign)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == sign)
			count++;
		str++;
	}
	return (count);
}

int	good_order(*str)
{
	
}

int	ft_atoi(char *str)
{
	if (check_sign(str, ' ') > 0 && check_sign(str, '-') > 0 && check_sign(str, '+' > 0))
	{
		
	}
	return (0);
}
