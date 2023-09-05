/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:04:30 by fseles            #+#    #+#             */
/*   Updated: 2023/09/05 10:05:43 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>


static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

int main ()
{
    //int isalpha(int c); // ekvivaletno isupper || islower
    //int isupper(int c);
    printf("%d", isalpha('3')); 

    printf("Original function value is %d\n", islower('a'));
    printf("Mycopyyy function value is %d\n\n", ft_islower('a'));

    printf("Original function value is %d\n", islower('b'));
    printf("Mycopyyy function value is %d\n\n", ft_islower('b'));

    printf("Original function value is %d\n", islower('z'));
    printf("Mycopyyy function value is %d\n\n", ft_islower('z'));

    printf("Original function value is %d\n", islower('a'));
    printf("Mycopyyy function value is %d\n\n", ft_islower('a'));

    printf("Original function value is %d\n", islower(0));
    printf("Mycopyyy function value is %d\n\n", ft_islower(0));

    printf("Original function value is %d\n", islower('A'));
    printf("Mycopyyy function value is %d\n\n", ft_islower('A'));

    printf("Original function value is %d\n", islower('\n'));
    printf("Mycopyyy function value is %d\n\n", ft_islower('\n'));

    return (0);
}
       
