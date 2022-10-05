/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:11:05 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/05 12:45:33 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*range_create(int min, int max)
{
	int			*n;
	long int	i;
	long int	minn;
	long int	maxx;
	long int	diff;

	i = 0;
	minn = min;
	maxx = max;
	n = NULL;
	if (min > max || min == max)
		return (n);
	diff = (maxx - minn) * sizeof(int);
	n = malloc(diff);
	while (i < (maxx - min))
	{
		n[i] = minn;
		minn++;
		i++;
	}
	(void) diff;
	return (n);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = range_create(min, max);
	if (min >= max)
		return (0);
	if (!*range)
		return (-1);
	return (max - min);
}
