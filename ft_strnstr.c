
#include "libft.h"
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "This is a simple example.";
    const char *needle = "simple";
    size_t len = 10; // Sadece ilk 10 karakterde arama yapılacak.

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("'%s' alt dizesi '%s' içinde bulundu.\n", needle, haystack);
        // Çıktı: 'simple' alt dizesi 'This is a simple example.' içinde bulundu.
    } else {
        printf("'%s' alt dizesi '%s' içinde bulunamadi.\n", needle, haystack);
    }

    return 0;
}

