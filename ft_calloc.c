/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:52:28 by hakotu            #+#    #+#             */
/*   Updated: 2024/10/17 21:12:49 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = malloc(size * count);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (size * count));
	return (tmp);
}
