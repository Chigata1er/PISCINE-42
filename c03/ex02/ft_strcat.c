/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:41:00 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/19 08:54:45 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s2, char *s1)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	while (s1[j] != '\0')
	{
		s2[j + i] = s1[j];
		j++;
	}
	s2[j + i] = '\0';
	return (s2);
}
/*
#include <stdio.h>

int main() {
    char s1[] = "ali";
    char s3[] = "ali";

    char s2[20] = "bonjoutr  ";
    char s4[20] = "bonjoutr  ";

    int s;
    ft_strcat(s2,s1);
    strcat(s4, s3);
    printf("%s\n", s2);
    printf("%s\n", s4);


    return 0;
}
*/
