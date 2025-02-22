/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerra <mguerra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:42:38 by mguerra           #+#    #+#             */
/*   Updated: 2022/05/03 08:15:23 by mguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Dynamic memory allocation */
void	*gc_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = gc_malloc(sizeof(void) * (nmemb * size));
	if (!res)
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}
