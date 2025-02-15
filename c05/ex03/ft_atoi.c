/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:29:15 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/26 15:26:08 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_help_atoi(int sign, int value, char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == ' '
		|| str[i] == '+' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v'
		|| str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= (-1);
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			if (value == 0)
				value += (str[i] - 48);
			else
				value = value * 10 + (str[i] - 48);
		}
		i++;
	}
	return (value * sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	value;
	int	retour;

	sign = 1;
	value = 0;
	retour = ft_help_atoi(sign, value, str);
	return (retour);
}
/*
int	main()
{
	char b[] = "--+ - +	 	    466bj553489kh";
	int a = ft_atoi(b);
	printf("%d", a);
}*/
