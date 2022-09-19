/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:25:01 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/19 00:02:19 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_digits(char digits[11])
{	
	int	index;

	index = 0;
	while (index < 11)
	{
		if (index == 0 || digits[index] == '-')
		{
			write(1, &digits[index], 1);
		}
		else if (digits[index] != '0' || digits[index - 1] > '0')
			write(1, &digits[index], 1);
		index++;
	}
}

void	create_table(char digits[11], int nb)
{
	int	index;

	index = 10;
	while (index >= 1)
	{
		digits[index] = (nb % 10) + '0';
		if (digits[index] == '0')
			digits[index] = 0;
		nb = nb / 10;
		index--;
	}
}

void	checker(int nb)
{
	char	digits[11];
	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
		
	if (nb < 0)
	{
		digits[0] = '-';
		nb = nb * -1;
		create_table(digits, nb);
	}
	else
	{
		digits[0] = 0;
		create_table(digits, nb);
	}
	write_digits(digits);
}

void	ft_putnbr(int nb)
{
	checker(nb);
}
