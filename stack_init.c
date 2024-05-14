/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:30:09 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/05/14 20:42:03 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(const char *s)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || \
		*s == '\r' || *s == '\f' || *s == '\v')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	
}

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