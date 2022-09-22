/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:20:38 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/22 14:03:25 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	gethex(int nb, char *hex)
{
	int		temp0;
	int		temp1;
	char	letter;
	int		i;

	temp0 = nb / 16;
	temp1 = nb % 16;
	if (temp1 < 10)
	{
		hex[0] = temp0 + '0';
		hex[1] = temp1 + '0';
	}
	else
	{
		i = 10;
		letter = 'a';
		while (i != temp1)
		{
			i++;
			letter++;
		}
		hex[0] = temp0 + '0';
		hex[1] = letter;
	}
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
			gethex((int)str[i], hex);
			write(1, "\\", 1);
			write(1, hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
