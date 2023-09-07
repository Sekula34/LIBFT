/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:09:22 by fseles            #+#    #+#             */
/*   Updated: 2023/09/06 18:09:25 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i; 

	i = 0; 
	while ((n - i) > 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++; 
	}
	return (0); 
}

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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i; 

	if (little[0] == '\0')
		return ((char *)big); 
	i = 0; 
	while (i < (len + 1 - ft_strlen(little)) && big[i] != '\0')
	{
		if (ft_strncmp(big, little, ft_strlen(little)) == 0)
			return ((char *) big);
		big++;
		i++; 
	}
	return (NULL); 
}
// #include<stdlib.h>
// int main()
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring, 17);

// 	return (0);
// }