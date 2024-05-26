
#include "libft.h"
#include <stdio.h>
char *ft_strchr(const char *str, int c)
{
    size_t i;

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (str+i);
        i++;    
    }
    return (NULL);
}

int main() {
    
     const char str[] = "Hello World!";  
     char *result;
     char kelime = 'o';

    result = ft_strchr(str,kelime);
     if (result != NULL)
     {
        printf("Dizinin kalan kismi: %s", result);
     }
     else
     {
        printf("Karakter bulunamadi");
     }
}