/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 01:06:39 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/14 12:00:26 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, &"P", 1);
	}
	else
	{
		write(1, &"N", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(8);
	return (0);
}*/
