#include <ctype.h>
#include <stdio.h>


static int ft_isupper(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    return (0);
}

int main ()
{
    //int isalpha(int c); // ekvivaletno isupper || islower
    //int isupper(int c);
    printf("%d", isalpha('3')); 

    return (0);
}
       
