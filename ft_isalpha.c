
#include "libft.h"

#include <stdio.h>
int ft_isalpha(int c)
{
    if (c >= 65 && c <= 122)
        return (1);
    else
        return (0);
}

int main() {
    char c;

    printf("Bir karakter girin: ");
    scanf("%c", &c);

    if (ft_isalpha(c)) {
        printf("%c bir harftir.\n", c);
    } else {
        printf("%c bir harf değildir.\n", c);
    }
}