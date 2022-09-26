/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:18:24 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/26 17:19:16 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int i;

	if (size < 1)
		return ;
	i = 0;
	while (i < size)
	{
		buffer = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = buffer;
		i++;
		size--;
	}
}
