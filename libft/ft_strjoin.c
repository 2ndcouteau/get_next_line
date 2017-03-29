/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:17:56 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/28 17:46:03 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_lenjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (s1 != NULL)
	{
		while (s1[a] != '\0')
			a++;
	}
	if (s2 != NULL)
	{
		while (s2[b] != '\0')
			b++;
	}
	a = a + b;
	return (a);
}

static void	ft_strcpjoin(char const *s1, char const *s2, char *dst)
{
	size_t	a;
	size_t	i;

	a = 0;
	i = 0;
	if (s1 != NULL)
	{
		while (s1[a] != '\0')
		{
			dst[i] = s1[a];
			a++;
			i++;
		}
	}
	a = 0;
	if (s2 != NULL)
	{
		while (s2[a] != '\0')
		{
			dst[i] = s2[a];
			a++;
			i++;
		}
	}
	dst[i] = '\0';
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	result = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		if (!(result = (char*)malloc(sizeof(char) * ft_lenjoin(s1, s2) + 1)))
			return (NULL);
		ft_strcpjoin(s1, s2, result);
		return (result);
	}
	else if (s2 != NULL)
	{
		result = ft_strdup(s2);
		return (result);
	}
	else
		return (NULL);
}
