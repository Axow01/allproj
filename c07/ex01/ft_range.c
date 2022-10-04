/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:31:39 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/04 12:14:17 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*n;
	long int	i;
	long int	minn;
	long int	maxx;
	long int	diff = (max - min) * sizeof(int);

	n = NULL;
	if (min > max || min == max)
		return (n);
	n = malloc((max - min) * sizeof(int));
	i = 0;
	minn = min;
	maxx = max;
	while (i < (maxx - minn))
	{
		n[i] = minn;
		minn++;
		i++;
	}
	(void) diff;
	return (n);
}
