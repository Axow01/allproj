/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:43:45 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/14 21:50:04 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;
	int space = 32;

	for(d = '0'; d <= '9'; d++)
	{
		for(c ='0'; c <='9'; c++) 
		{
			for(b = '0'; b <= '9'; b++)
			{
				for(a = '1'; a <= '9'; a++)
				{
					write(1, &d, 1);
					write(1, &c, 1);
					write(1, &space, 1);
					write(1, &b, 1);
					//	Pour enlever 01 01 et le remplacer par 01 02.
					if(c == '1' && a == '1')
					{
						write(1, "2", 1);
						a++;
					}
					else
					{
						write(1, &a, 1);
					}
					if(d == '9' && c == '9' && b == '9' && a == '9')
					{
						//write(1, "NULL", 1);
					}
					else
					{
						write(1, ",", 1);
						write(1, &space, 1);
					}
				}
			}
		}
	}
}
