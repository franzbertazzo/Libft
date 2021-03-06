/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:54:52 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 21:02:04 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcat() and strncat() functions append
** a copy of the null-terminated string
** s2 to the end of the null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
** The strncat() function appends not more than n characters from s2,
** and then adds a terminating `\0'.
** The source and destination strings should not overlap,
** as the behavior is undefined.
*/

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *src;

	src = s1;
	while (*s1)
		s1++;
	while (n-- > 0 && *s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (src);
}
