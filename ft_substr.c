/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:55:15 by fseles            #+#    #+#             */
/*   Updated: 2023/09/08 08:55:17 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (start > ft_strlen(s))
		return (NULL);
	i = 0;
	p = ft_calloc(len + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	while ((i < len) && (s[start] != '\0'))
	{
		p[i] = s[start];
		i++;
		start++;
	}
	return (p);
}
// #include<stdio.h>
// int main()
// {
// 	char s[] = "FilipSeles"; 
// 	char *p1; 

// 	p1 = ft_substr(s,9,2); 
// 	printf("%s", p1); 
// 	free(p1); 
// 	return (0); 
// }