/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:04:19 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/17 09:06:25 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <unistd.h>
int     main()
{	
	char e, d;

        int a = 5;
        int b = 7;
        int *pa = &a;
        int *pb = &b;
        *pa = 5;
        *pb = 7;
        ft_swap(pa,pb);
	d = *pa+ '0';
        e = *pb + '0';
        write(1, &d, 1);

        write(1, &e, 1);
        return (0);

}*/
