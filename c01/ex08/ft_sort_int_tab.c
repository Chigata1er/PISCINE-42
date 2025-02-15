/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:25:00 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/17 13:02:22 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	j;
	int	i;

	i = 0;
	j = 0;
	a = 0;
	while (j <= size -1)
	{
		while (i <= size - 1)
		{
			if (tab[i] < tab[i + 1])
			{
				a = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = a;
			}
			i++;
		}
		j++;
	}
}
/*
int     main()
{
        int a = 5;
        int b[5] = {1,2,3,4,5};
        ft_sort_int_tab(b,a);

	int     i;
	char c;
        i = 0;
        while (i <= a - 1)
        {
		c = b[i] + '0';
		write(1, &c, 1);
		i++;
        }
        return (0);
}
*/
