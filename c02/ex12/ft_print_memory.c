/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:13:50 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/21 13:17:18 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	gethex(int nb, char *hex)
{
	int		temp0;
	int		temp1;

	temp0 = nb / 16;
	temp1 = nb % 16;
	if (temp1 < 10)
	{
		hex[0] = temp0 + '0';
		hex[1] = temp1 + '0';
	}
	else
	{
		char	letter;
		int		i;

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

//void	*ft_print_memory(void *addr, unsigned int size)
//{

//	return (addr);
//}