
#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{   
    char *str1;
    char *str2;
    size_t i;

    i= 0;
    str1 = (char *)s1;
    str2 = (char *)s2;
    if (n == 0)
		return (0);
    while(i < n)
    {
        if (str1[i] != str2[i])
           return ((unsigned char)str1[i] - (unsigned char)str2[i]);
        i++;
    }
    return (0);
}

int main() {
    
    char str[] = "Hello Worl";  
    char str2[] = "Hello World";
    int result;
    result = ft_memcmp(str,str2,14);
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