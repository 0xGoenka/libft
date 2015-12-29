/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:42:11 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/29 15:14:55 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s3 = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s3)
		return (0);
	s3 = ft_strcpy(s3, (char *)s1);
	s3 = ft_strcat(s3, (char *)s2);
///	s3[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (s3);
}
