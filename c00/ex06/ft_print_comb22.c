/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb22.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:04:44 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/17 20:41:50 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_digits(char digits[4]);

void	ft_print_comb2(void)
{
	char	digits[4];

	digits[0] = '0';
	while (digits[0] <= '9')
	{
		digits[1] = '0';
		while (digits[1] <= '9')
		{
			digits[2] = '0';
			while (digits[2] <= '9')
			{
				digits[3] = digits[2] + 1;
				while (digits[3] <= '9')
				{
					write_digits(digits);
					digits[3]++;
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}

void	write_digits(char digits[4])
{
	write(1, &digits[0], 1);
	write(1, &digits[1], 1);
	write(1, " ", 1);
	write(1, &digits[2], 1);
	write(1, &digits[3], 1);
	if (digits[0] != '9' || digits[1] != '9' || digits[2] != '9' || digits[3] != '9')
		write(1, ", ", 2);
}

int	main(void)
{
	ft_print_comb2();
}
