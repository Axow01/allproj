/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:42:29 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/16 11:57:35 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_combn(int n)
{
	char	rows[n];
	int	index;

	rows[0] = '1';
	rows[1] = '2';
	index = 0;
	while (index < n)
	{
		write(1, &rows[index], 1);
		index++;
	}
}

int	main(void)
{
	ft_print_combn(2);
}
