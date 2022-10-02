/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:08:17 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/20 14:25:36 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str != '\0')
	{
		if ((*str < 48 || *str > 57) && *str != 0)
			is_numeric = 0;
		str++;
	}
	return (is_numeric);
}
