/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mick <mick@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:02:36 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/29 01:34:11 by mick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	defnb;

	i = 1;
	defnb = nb;
	if ((power == 0 && nb == 0))
		return (1);
	while (i < power)
	{
		nb *= defnb;
		i++;
	}
	return (nb);
}
