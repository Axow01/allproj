/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:02:36 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/03 16:10:41 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	defnb;

	i = 1;
	defnb = nb;
	if ((power == 0 && nb <= 0))
		return (1);
	if (power <= 0)
		return (0);
	while (i < power)
	{
		nb *= defnb;
		i++;
	}
	return (nb);
}
