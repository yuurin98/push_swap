/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:36:44 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/10/05 15:02:44 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**split_argv;

	a = NULL;
	b = NULL;
	split_argv = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (argc == 2)
	{
		split_argv = my_split(argv[1], ' ');
		if (!split_argv)
			error_message(&a);
		argv = split_argv;
	}
	init_stack_a(&a, argv + 1);
	if (!stack_check(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	if (split_argv)
		free_argv(split_argv);
	return (0);
}
