/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:42:34 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/03 16:10:14 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(2513, -821));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-3531, 0));
	printf("%d\n", ft_iterative_power(4010, 1));
	printf("%d\n", ft_iterative_power(0, 2));
	printf("%d\n", ft_iterative_power(1, 3));
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(3, 5));
	printf("%d\n", ft_iterative_power(-7, 6));
	printf("%d\n", ft_iterative_power(-5, 8));
	printf("%d\n", ft_iterative_power(-1, 10));
	return (0);
}