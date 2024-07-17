/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:11:22 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/07/07 23:10:50 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(t_stack_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int	check_syntax(char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '+' || str[i] == '-' || str[i] >= '0' && str[i] <= '9'))
		return (1);
	if ((str[i] == '+' || str[i] == '-') && !str[i + 1])
		return (1);
	if ((str[i] == '+' || str[i] == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (1);
	while (str[++i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
	}
	return (0);
}

void	free_stack(t_stack_node **a)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (!a)
		return ;
	current = *a;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*a = NULL;
}

void	error_message(t_stack_node **a)
{
	free_stack(a);
	ft_printf("Error\n");
	exit(1);
}