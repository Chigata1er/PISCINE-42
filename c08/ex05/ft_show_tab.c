/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:30:22 by ibyeo             #+#    #+#             */
/*   Updated: 2024/10/03 18:31:31 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *aff)
{
	int	i;

	i = 0;
	while (aff[i].str)
	{
		ft_putstr(aff[i].str);
		ft_putstr("\n");
		ft_putnbr(aff[i].size);
		ft_putstr("\n");
		ft_putstr(aff[i].copy);
		ft_putstr("\n");
		i++;
	}
}
