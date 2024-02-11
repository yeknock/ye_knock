/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:08:29 by ymartiro          #+#    #+#             */
/*   Updated: 2024/02/01 17:09:50 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t length)
{
	unsigned char	*p;

	p = b;
	while (length-- > 0)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}
