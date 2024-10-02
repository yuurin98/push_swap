/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:40:24 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/09/28 22:28:49 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>

int	ft_putchar(char c);
int	ft_stringlen(char *str);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthexupper(unsigned int n);
int	ft_puthexlower(unsigned int n);
int	ft_printp(unsigned long long ptr);
int	ft_printf(const char *format, ...);

#endif