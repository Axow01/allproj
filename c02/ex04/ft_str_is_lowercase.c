/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:39:37 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/20 14:26:10 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_alpha_lower;

	is_alpha_lower = 1;
	while (*str != '\0')
	{
		if ((*str < 97 || *str > 122) && *str != 0)
			is_alpha_lower = 0;
		str++;
	}
	return (is_alpha_lower);
}
