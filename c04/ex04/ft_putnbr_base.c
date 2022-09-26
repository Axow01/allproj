/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:06:00 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/26 17:03:23 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void	conv_to_base_print(int nbr, int length, char *base)
{
	if (nbr > length - 1)
		conv_to_base_print(nbr / length, length, base);
	write(1, &base[nbr % length], 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	i = 0;
	j = 0;
	while (base[i])
	{
		while (i > j)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base) // Initialize the function.
{
	if (str_len(base) <= 1 || !check_base(base))
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	conv_to_base_print(nbr, str_len(base), base);
}
