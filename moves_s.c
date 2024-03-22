/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:24:23 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/03/22 18:40:58 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	int	temp;

	if (stack_a->size < 2)
		return ;
	temp = stack_a->tab[0];
	stack_a->tab[0] = stack_a->tab[1];
	stack_a->tab[1] = temp;
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	int	temp;

	if (stack_b->size < 2)
		return ;
	temp = stack_b->tab[0];
	stack_b->tab[0] = stack_b->tab[1];
	stack_b->tab[1] = temp;
	ft_printf("sb\n");
}

void	sa_quiet(t_stack *stack_a)
{
	int	temp;

	if (stack_a->size < 2)
		return ;
	temp = stack_a->tab[0];
	stack_a->tab[0] = stack_a->tab[1];
	stack_a->tab[1] = temp;
}

void	sb_quiet(t_stack *stack_b)
{
	int	temp;

	if (stack_b->size < 2)
		return ;
	temp = stack_b->tab[0];
	stack_b->tab[0] = stack_b->tab[1];
	stack_b->tab[1] = temp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa_quiet(stack_a);
	sb_quiet(stack_b);
	ft_printf("ss\n");
}