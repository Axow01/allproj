/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:18:24 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/20 12:25:38 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int i;

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
