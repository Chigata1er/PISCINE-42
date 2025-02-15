/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:56:29 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/27 10:33:50 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i] != NULL)
		{
			ft_print(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
