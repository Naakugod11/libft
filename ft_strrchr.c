/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:48:27 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/15 13:33:07 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;

	x = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + x);
	while (x > 0)
	{
		if (s[x - 1] == (unsigned char)c)
		{
			return ((char *)(s + x - 1));
		}
		x--;
	}
	return (NULL);
}
