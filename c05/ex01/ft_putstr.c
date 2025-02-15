/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:49:10 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/20 09:41:00 by ibyeo            ###   ########.fr       */
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
/*
int     main()
{
        char b[] = "alibaba";
        ft_putstr(b);
        //printf("%d", a);
}
*/
