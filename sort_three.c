/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 23:11:52 by yuurin98          #+#    #+#             */
/*   Updated: 2024/07/18 00:10:35 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack_node **a)
{
	t_stack_node	*biggest_node;
	
	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(&a);
	else if ((*a)->next == biggest_node)
		rra(&a);
	if ((*a)->value > (*a)->next->value)
		sa(&a);
}