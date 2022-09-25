/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mick <mick@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 03:10:19 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/24 21:18:29 by mick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '0')
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	integer[12];
	int		i;

	integer[11] = '\0';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		integer[0] = '-';
	}
	else if (nb >= 0)
		integer[0] = '0';
	i = 10;
	while (i >= 1)
	{
		integer[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	ft_putstr(integer);
}
