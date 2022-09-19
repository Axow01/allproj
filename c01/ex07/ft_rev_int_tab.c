/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:18:24 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/18 21:40:34 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*swap;
	int	*swap2;
	int	buffer;

	swap = tab;
	swap2 = tab + (size - 1);
	while (swap < swap2)
	{
		buffer = *swap;
		*swap = *swap2;
		*swap2 = buffer;
		swap++;
		swap2--;
	}
}
