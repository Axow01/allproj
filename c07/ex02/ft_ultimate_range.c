/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:11:05 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/01 19:35:58 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	i;
	long int	minn;
	long int	maxx;

	range = NULL;
	if (((max - min) - 1) * 4 <= 0)
		return (range);
	if (min > max || min == max)
		return (range);
	n = malloc((max - min) * 4);
	i = 0;
	minn = min;
	maxx = max;
	while (minn < maxx)
	{
		range[i] = minn;
		minn++;
		i++;
	}
	return (range);
}
