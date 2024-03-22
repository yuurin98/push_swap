/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:43:29 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/03/22 17:43:30 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack_a)
{
	int	i;
	int	temp;

	i = stack_a->size - 1;
	temp = stack_a->tab[i];
	while (i > 0)
	{
		stack_a->tab[i] = stack_a->tab[i - 1];
		i--;
	}
	stack_a->tab[i] = temp;
	ft_printf("rra\n");
}

void rrb(t_stack *stack_b)
{
	int	i;
	int	temp;

	i = stack_b->size - 1;
	temp = stack_b->tab[i];
	while (i > 0)
	{
		stack_b->tab[i] = stack_b->tab[i - 1];
		i--;
	}
	stack_b->tab[i] = temp;
	ft_printf("rrb\n");
}

void rra_quiet(t_stack *stack_a)
{
	int	i;
	int	temp;

	i = stack_a->size - 1;
	temp = stack_a->tab[i];
	while (i > 0)
	{
		stack_a->tab[i] = stack_a->tab[i - 1];
		i--;
	}
	stack_a->tab[i] = temp;
}

void rrb_quiet(t_stack *stack_b)
{
	int	i;
	int	temp;

	i = stack_b->size - 1;
	temp = stack_b->tab[i];
	while (i > 0)
	{
		stack_b->tab[i] = stack_b->tab[i - 1];
		i--;
	}
	stack_b->tab[i] = temp;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra_quiet(stack_a);
	rrb_quiet(stack_b);
	ft_printf("rrr\n");
}