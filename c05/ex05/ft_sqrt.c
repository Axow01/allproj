/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:37:06 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/02 15:04:24 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;
	int	value;

	root = 0;
	while (root <= nb)
	{
		value = root * root;
		if (value >= nb || root >= 46340)
		{
			if (nb % root == 0)
				return (root);
			else
				return (0);
		}
		root++;
	}
	return (0);
}
