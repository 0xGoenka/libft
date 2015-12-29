/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:34:44 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/23 20:22:50 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((start + len) > ft_strlen(s))
		return (NULL);
	if (!(s2 = (char *)malloc(sizeof(s) * len + 1)))
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	return (s2);
}
