/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:37:06 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/01 22:09:55 by mmarcott         ###   ########.fr       */
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
		if (value >= nb)
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
