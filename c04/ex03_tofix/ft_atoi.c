/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:42:57 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/29 15:45:18 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	operator;
	int	number;

	operator = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			operator *= -1;
		else if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				number = 10 * number + *str - '0';
				str++;
			}
			break ;
		}
		str++;
	}
	return (operator * number);
}
