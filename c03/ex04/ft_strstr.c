/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:20:47 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/24 13:00:47 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *s2, char *s1)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (s1[0] == '\0')
		return (&s2[0]);
	while (s2[i] != '\0')
	{
		if (s2[i] == s1[0])
		{
			j = 0;
			while (s1[j] != '\0' && s2[i + j] != '\0' && s2[i + j] == s1[j])
			{
				j++;
			}
			if (s1[j] == '\0')
			{
				return (&s2[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main() {
   char s1[] = "ala";
   char s3[] = "ala";

   char s2[30] = "bonjoutr ali ";
   char s4[30] = "bonjoutr ali ";

   int s;
   //char *m = ft_strstr(s2,s3);
   //char *result = strstr(s4, s1); 
   // strstr(s4, s3);
  //printf("%s\n", m);
   //printf("%s\n", result);


    return 0;
}
*/
