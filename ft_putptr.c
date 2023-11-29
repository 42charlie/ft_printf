/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:32:00 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/29 21:49:16 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long nbr, int *len)
{
	char	*hx;

	hx = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putptr(nbr / 16, len);
		ft_putptr(nbr % 16, len);
	}
	else if (nbr < 16)
	{
		ft_putchar(hx[nbr], len);
	}
}
