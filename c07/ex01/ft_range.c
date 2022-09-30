/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:31:39 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/30 13:03:13 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*n;
	long int	i;
	long int	minn;
	long int	maxx;

	n = NULL;
	if ((max - min) * 4 <= 0)
		return (n);
	if (min > max || min == max)
		return (n);
	n = malloc((max - min) * 4);
	i = 0;
	minn = min;
	maxx = max;
	while (minn <= maxx)
	{
		n[i] = minn;
		minn++;
		i++;
	}
	return (n);
}
