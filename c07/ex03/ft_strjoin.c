/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:36:47 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/02 16:40:30 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_tstr(int size, char **strs)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
		total += ft_strlen(strs[i++]);
	return (total);
}

void	ft_strcat(char dest, char src)
{
	
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *p;

	p = malloc(ft_strlen(sep) + ft_strlen_tstr(size, strs) + 1);
	return (sep);
}

int	main(int argc, char **argv)
{
	char	*strs[] = {"Bonjour", "peoples", "bjjbbj"};
	
	if (argc != 3)
		return (0);
	char	*str = ft_strjoin(3, strs, argv[2]);
	printf("%s\n", str);
	return (0);
}
