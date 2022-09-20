/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:51:21 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/19 20:36:03 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
			is_alpha = 0;
		str++;
	}
	return (is_alpha);
}
