/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:07:43 by fseles            #+#    #+#             */
/*   Updated: 2023/09/06 11:07:45 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>


#include <stdio.h>
#include <string.h>

static size_t	lengthf_of_src(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++; 
	}
	return (i); 
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (size > 1)
	{
		dst[i] = src[i]; 
		i++; 
		size--; 
	}
	if (size > 0)
	{
		dst[i] = '\0';
		i++; 
	}
	return (lengthf_of_src(src)); 
}

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}