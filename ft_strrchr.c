/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:11:26 by fseles            #+#    #+#             */
/*   Updated: 2023/09/06 15:11:28 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0; 
	while (s[i] != '\0')
	{
		i++; 
	}
	return (i); 
}
char *ft_strrchr(const char *s, int c)
{
	size_t length_s; 

	length_s = ft_strlen(s);
	while(length_s > 0)
	{
		if(s[length_s] == c)
			return ( (char*) (s + length_s));
		length_s --; 
	}
	if(s[length_s] == c)
		return ((char *)s);
	return (NULL);

}

#include <stdio.h>
#include <string.h>

int main () {
   //int len;
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = 'z';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}