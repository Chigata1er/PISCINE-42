/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:07:38 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/26 15:12:01 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		write(1, &s2[i], 1);
		i++;
	}
}

int	f_verif(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (-1) * (nb);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		n;
	char	c[11];

	i = 0;
	n = 0;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	nb = f_verif(nb);
	while (nb != 0)
	{
		n = nb % 10;
		c[i] = n + '0';
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &c[i], 1);
	}
}
/*
int     main()
{
	
        int d = -21483648;
        ft_putnbr(d);
       // printf("%d", a);
       return 0;
}
*/
