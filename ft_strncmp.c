
#include "libft.h"
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
		return (0);
    while(s1[i] !='\0' && s2[i] != '\0' && i <= n-1)
        i++;
    return (s1[i] - s2[i]);
}

int main() {
    
    char str[] = "Hello World";  
    char str2[] = "Hello World";
    int result;
    result = ft_strncmp(str,str2,14);
     if (result == '0')
     {
        printf("This array is equal to each other");
     }
     else
     {
        printf("This array not equal to each other");
     }

     printf("%d\n",result);
}