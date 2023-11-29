/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:48:25 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/29 21:47:59 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(int c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putptr(unsigned long nbr, int *len);
void	ft_putuns(unsigned int nb, int *len);
int		ft_printf(const char *frm, ...);
void	ft_puthex(unsigned int nbr, int is_upper, int *len);

#endif