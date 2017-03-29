/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:55:38 by qrosa             #+#    #+#             */
/*   Updated: 2015/02/23 18:53:30 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t n;

	n = 0;
	if (s)
	{
		while (s[n])
		{
			ft_putchar_fd(s[n], fd);
			n++;
		}
		ft_putchar_fd('\n', fd);
	}
}
