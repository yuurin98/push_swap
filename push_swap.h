/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:16:04 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/03/07 06:57:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	int					final_index;
	int					push_price;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;	
}					t_stack_node;

typedef struct s_moves
{
	int				ra;
	int				rb;
	int				rra;
	int				rrb;
}					t_moves;

typedef struct s_data
{
	t_stack			*a;
	t_stack			*b;
	t_moves			*moves;
	int				*sorted;
	int				size;
}					t_data;

void				ft_swap(t_stack *stack);
void				ft_push(t_stack *stack1, t_stack *stack2);
void				ft_rotate(t_stack *stack);
void				ft_reverse_rotate(t_stack *stack);

void				ft_swap_a(t_data *data);
void				ft_swap_b(t_data *data);
void				ft_swap_s(t_data *data);
void				ft_push_a(t_data *data);
void				ft_push_b(t_data *data);
void				ft_rotate_a(t_data *data);
void				ft_rotate_b(t_data *data);
void				ft_rotate_r(t_data *data);
void				ft_reverse_rotate_a(t_data *data);
void				ft_reverse_rotate_b(t_data *data);
void				ft_reverse_rotate_r(t_data *data);

void				ft_init_data(t_data *data, int size);
void				ft_init_stack(t_stack *stack, int size);
void				ft_init_moves(t_moves *moves);
void				ft_init_sorted(t_data *data);

void				ft_free_data(t_data *data);
void				ft_free_stack(t_stack *stack);
void				ft_free_moves(t_moves *moves);
void				ft_free_sorted(t_data *data);

void				ft_check_duplicates(t_data *data);
void				ft_check_sorted(t_data *data);
void				ft_check_sorted_b(t_data *data);
void				ft_check_sorted_a(t_data *data);

void				ft_push_swap(t_data *data);
void				ft_sort(t_data *data);
void				ft_sort_3(t_data *data);
void				ft_sort_5(t_data *data);
void				ft_sort_100(t_data *data);
void				ft_sort_500(t_data *data);

void				ft_error(void);
void				ft_error_free(t_data *data);
void				ft_error_free_exit(t_data *data);
void				ft_error_free_exit_str(t_data *data, char *str);

#endif