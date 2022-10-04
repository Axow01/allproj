/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:31:39 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/04 17:18:58 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*n;
	long int	i;
	long int	minn;
	long int	maxx;

	i = 0;
	minn = min;
	maxx = max;
	n = NULL;
	if (min > max || min == max)
		return (n);
	long int	diff;

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
