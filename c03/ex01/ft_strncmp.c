/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:21:48 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/21 21:51:45 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	addition_str(char *str, unsigned int n)
{
	int	total;
	int	index;

	total = 0;
	index = 0;
	while (*str != '\0' && (unsigned)index != n)
	{
		total = total + (int)*str;
		str++;
		index++;
	}
	return (total);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	val;

	val = 0;
	if (addition_str(s1, n) < addition_str(s2, n))
		val = -1;
	else if (addition_str(s1, n) > addition_str(s2, n))
		val = 1;
	else if (addition_str(s1, n) == addition_str(s2, n))
		val = 0;
	return (val);
}
