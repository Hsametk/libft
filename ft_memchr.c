#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;
	size_t			i;

	alts = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (alts[i] == (unsigned char)c)
			return (&alts[i]);
		i++;
	}
	return (NULL);
}
int main() {
    const char str[] = "Hello, World!";
    char ch = 'e';
    char *result;

    result = ft_memchr(str, ch, ft_strlen(str));

    if (result != NULL) {
        printf("'%c' karakteri ilk olarak %ld. pozisyonda bulundu.\n", ch, result - str);
        // Çıktı: 'o' karakteri ilk olarak 4. pozisyonda bulundu.
    } else {
        printf("'%c' karakteri dizide bulunamadı.\n", ch);
    }

    return 0;
}


