/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:01:51 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/09/28 22:28:43 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = -1;
	if (str == NULL)
	{
		str = "(null)";
		len = ft_stringlen(str);
		while (str[++i] != '\0')
			ft_putchar(str[i]);
		return (len);
	}
	else
	{
		len = ft_stringlen(str);
		while (str[++i] != '\0')
			ft_putchar(str[i]);
		return (len);
	}
}
