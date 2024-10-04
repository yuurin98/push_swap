/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:14:20 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/10/04 16:14:56 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	while (len_a > 3 && !stack_check(*a))
	{
		init_nodes_a(a, b);
		move_a_to_b(a, b);
		len_a--;
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(a, b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
