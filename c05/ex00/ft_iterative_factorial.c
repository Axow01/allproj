/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:21:35 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/27 19:43:49 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;

	if (nb == 0)
		return (0);
	index = nb - 1;
	while (index != 1)
	{
		nb = nb * index;
		index--;
	}
	return (nb);
}
