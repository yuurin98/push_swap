/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:13:04 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/07/18 00:03:30 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (stack_b->size == 0)
		return ;
	i = stack_a->size;
	while (i > 0)
	{
		stack_a->tab[i] = stack_a->tab[i - 1];
		i--;
	}
	stack_a->tab[0] = stack_b->tab[0];
	i = 0;
	while (i < stack_b->size)
	{
		stack_b->tab[i] = stack_b->tab[i + 1];
		i++;
	}
	stack_a->size++;
	stack_b->size--;
	ft_printf("pa\n");
}

void	pb(t_stack *stack_b, t_stack *stack_a)
{
	int	i;

	if (stack_a->size == 0)
		return ;
	i = stack_b->size;
	while (i > 0)
	{
		stack_b->tab[i] = stack_b->tab[i - 1];
		i--;
	}
	stack_b->tab[0] = stack_a->tab[0];
	i = 0;
	while (i < stack_a->size)
	{
		stack_a->tab[i] = stack_a->tab[i + 1];
		i++;
	}
	stack_b->size++;
	stack_a->size--;
	ft_printf("pb\n");
}