/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:20:38 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/21 20:13:15 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ascii_dec_to_hex(int dec, char *hex)
{
	int		modulo;
	int		digit;
	char	letter;

	letter = 'a';
	digit = 10;
	modulo = dec % 16;
	*hex = (dec / 16) + '0';
	hex++;
	if (modulo > 9)
	{
		while (digit < 16)
		{
			if (modulo == digit)
			{
				*hex = letter;
				break ;
			}
			digit++;
			letter++;
		}
	}
	else
		*hex = modulo + '0';
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ascii_dec_to_hex((int)*str, hex);
			write(1, "\\", 1);
			write(1, hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
