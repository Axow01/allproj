/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mick <mick@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:10:20 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/28 12:37:48 by mick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    else if (power == 1)
        return (nb);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}
