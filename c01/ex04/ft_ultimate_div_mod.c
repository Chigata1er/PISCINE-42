/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:29:57 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/17 09:23:49 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	float	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
int	main()
{
	char e, d;

        int a = 25;
        int b = 7;
        int *pa = &a;
        int *pb = &b;
        ft_ultimate_div_mod(pa,pb);
        d = *pa+ '0';
        e = *pb + '0';
        write(1, &d, 1);

        write(1, &e, 1);
        return (0);
}*/
