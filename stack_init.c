/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:30:09 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/05/13 18:31:28 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	append_node(t_stack_node **stack, int num)
{
	t_stack_node	*new;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	new = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!new)
		return ;
	new->next = NULL;
	new->value = num;
	if (!(*stack))
	{
		*stack = new;
		new->prev = NULL;
	}
	else
	{
		last_node = stack_last(*stack);
		last_node->next = new;
		new->prev = last_node;
	}
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	long	num;
	int		i;

	i = 0;
	while (argv[i])
	{
		
	}
}