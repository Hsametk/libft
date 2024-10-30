/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:41:38 by hakotu            #+#    #+#             */
/*   Updated: 2024/10/21 17:18:51 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	if (len + 1 < dstsize)
	{
		ft_memcpy(dst, src, len +1);
	}
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize -1] = '\0';
	}
	return (len);
}
