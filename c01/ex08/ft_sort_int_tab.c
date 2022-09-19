/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:56:53 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/19 12:33:52 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Remove after testing.

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;
	int	buffer;
	int	*slot1;
	int	*slot2;

	index = 1;
	index2 = 1;
	while (index2++ <= size)
	{
		slot1 = tab;
		slot2 = tab + 1;
		while (index++ < size)
		{
			if (*slot1 > *slot2)
			{
				buffer = *slot1;
				*slot1 = *slot2;
				*slot2 = buffer;
			}
			slot1++;
			slot2++;
		}
		index = 1;
	}
}
