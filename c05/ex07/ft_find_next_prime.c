/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:33:59 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/29 11:39:47 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	rem;

	rem = nb - 1;
	if (nb == 1 || nb == 0)
		return (0);
	while (rem > 1)
	{
		if (nb % rem == 0)
			return (0);
		rem--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
