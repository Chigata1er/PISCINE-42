/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:14:53 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/24 10:30:22 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    char s1[] = "bonjour rorot";
    char s2[] = "bonjour";
    int s;
    int a = 10;
    s = ft_strncmp(s1,s2, a);
    int result1 = strncmp(s1, s2, a);
    printf(" my fonction : %d", s);
    printf("they fonction : %d", result1);


    return 0;
}
*/
