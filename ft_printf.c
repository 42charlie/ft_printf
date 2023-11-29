/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:31:10 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/29 21:47:29 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	frmprocess(va_list args, const char *frm, int *len)
{
	if (*frm == 'd' || *frm == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (*frm == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*frm == 'p')
	{
		ft_putstr("0x", len);
		ft_putptr(va_arg(args, unsigned long), len);
	}
	else if (*frm == 'x')
		ft_puthex(va_arg(args, unsigned int), 0, len);
	else if (*frm == 'X')
		ft_puthex(va_arg(args, unsigned int), 1, len);
	else if (*frm == 'u')
		ft_putuns(va_arg(args, int), len);
	else if (*frm == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (*frm == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *frm, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, frm);
	if (write (1, "", 0) == -1)
		return (-1);
	while (*frm)
	{
		if (*frm == '%')
		{
			frm++;
			if (*frm)
			{
				frmprocess(args, frm, &len);
				frm++;
			}
			else
				break ;
		}
		else
			ft_putchar(*frm++, &len);
	}
	va_end(args);
	return (len);
}
