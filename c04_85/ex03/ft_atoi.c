/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:42:57 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/29 16:25:11 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (int)str[i] - '0';
		++i;
	}
	return (result * sign);
}
