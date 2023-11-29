/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:33:27 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/29 21:49:39 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns(unsigned int nb, int *len)
{
	if (nb > 9)
	{
		ft_putuns(nb / 10, len);
		ft_putuns(nb % 10, len);
	}
	else
		ft_putchar(nb + 48, len);
}
