/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:43:25 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/03/22 18:38:02 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(t_stack *stack_a)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack_a->tab[0];
	while (i < stack_a->size - 1)
	{
		stack_a->tab[i] = stack_a->tab[i + 1];
		i++;
	}
	stack_a->tab[i] = temp;
	ft_printf("ra\n");
}

void	rb(t_stack *stack_b)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack_b->tab[0];
	while (i < stack_b->size - 1)
	{
		stack_b->tab[i] = stack_b->tab[i + 1];
		i++;
	}
	stack_b->tab[i] = temp;
	ft_printf("rb\n");
}

void	ra_quiet(t_stack *stack_a)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack_a->tab[0];
	while (i < stack_a->size - 1)
	{
		stack_a->tab[i] = stack_a->tab[i + 1];
		i++;
	}
	stack_a->tab[i] = temp;
}

void	rb_quiet(t_stack *stack_b)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack_b->tab[0];
	while (i < stack_b->size - 1)
	{
		stack_b->tab[i] = stack_b->tab[i + 1];
		i++;
	}
	stack_b->tab[i] = temp;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra_quiet(stack_a);
	rb_quiet(stack_b);
	ft_printf("rr\n");
}