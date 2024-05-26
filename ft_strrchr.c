
#include "libft.h"
 #include <stdio.h>
char *ft_strrchr(const char *str, int c)
{
    int len = ft_strlen(str);
    size_t i ;

    while (len--)
    {
        if (str[len] == c)
        {
            return(str + len);
        }
    }
    return (NULL);
}
int main() {
    
     const char str[] = "Hello World!";  
     char *result;
     char kelime = 'o';

    result = ft_strrchr(str,kelime);
     if (result != NULL)
     {
        printf("Dizinin kalan kismi: %s", result);
     }
     else
     {
        printf("Karakter bulunamadi");
     }
}