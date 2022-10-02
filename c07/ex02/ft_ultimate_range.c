/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mick <mick@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:11:05 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/02 12:43:16 by mick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*range_create(int min, int max)
{
	int	*rangee;
	int	*buffer;

	if (min >= max)
		return (0);
	rangee = (int *)malloc(sizeof(min) * (max - min));
	if (!rangee)
		return (0);
	buffer = rangee;
	while (min < max)
		*buffer++ = min++;
	return (rangee);
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
