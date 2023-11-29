/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:48:35 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/29 20:25:08 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, int is_upper, int *len)
{
	char	*hx;

	hx = "0123456789abcdef";
	if (is_upper)
		hx = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, is_upper, len);
		ft_puthex(nbr % 16, is_upper, len);
	}
	else if (nbr < 16)
		ft_putchar(hx[nbr], len);
}
