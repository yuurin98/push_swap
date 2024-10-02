/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:13:04 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/10/02 11:06:12 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b != NULL)
		(*stack_b)->prev = NULL;
	temp->next = *stack_a;
	if (*stack_a != NULL)
		(*stack_a)->prev = temp;
	*stack_a = temp;
	ft_printf("pa\n");
}

void	pb(t_stack_node **stack_b, t_stack_node **stack_a)
{
	t_stack_node	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a != NULL)
		(*stack_a)->prev = NULL;
	temp->next = *stack_b;
	if (*stack_b != NULL)
		(*stack_b)->prev = temp;
	*stack_b = temp;	
	ft_printf("pb\n");
}