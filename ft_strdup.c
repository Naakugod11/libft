/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:33:43 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/15 19:10:57 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*alloc;

	len = ft_strlen(s1) + 1;
	alloc = (char *)malloc(len);
	if (alloc == NULL)
		return (NULL);
	ft_memcpy(alloc, s1, len);
	alloc[len - 1] = '\0';
	return (alloc);
}
