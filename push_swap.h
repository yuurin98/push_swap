/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:16:04 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/07/18 18:46:10 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_stack
{
	int				size;
	int				*tab;
}					t_stack;

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

//Handle errors
int				check_duplicate(t_stack_node *a, int n);
int				check_syntax(char *str);
void			free_stack(t_stack_node **a);
void			error_message(t_stack_node **a);

//Stack initialization
void			init_stack_a(t_stack_node **a, char **argv);
char			**ft_split(char const *s, char c);

//Nodes initialization
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_index(t_stack_node *stack);
void			set_cheapest(t_stack_node *stack);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name);

//Utils
int				stack_len(t_stack_node *stack);
t_stack_node	*stack_last(t_stack_node *stack);
bool			stack_check(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);

//Moves
void			sa(t_stack *stack_a);
void			sb(t_stack *stack_b);
void			ss(t_stack *stack_a, t_stack *stack_b);
void			pa(t_stack *stack_a, t_stack *stack_b);
void			pb(t_stack *stack_a, t_stack *stack_b);
void			ra(t_stack *stack_a);
void			rb(t_stack *stack_b);
void			rr(t_stack *stack_a, t_stack *stack_b);
void			rra(t_stack *stack_a);
void			rrb(t_stack *stack_b);
void			rrr(t_stack *stack_a, t_stack *stack_b);
void			sa_quiet(t_stack *stack_a);
void			sb_quiet(t_stack *stack_b);
void			ra_quiet(t_stack *stack_a);
void			rb_quiet(t_stack *stack_b);
void			rra_quiet(t_stack *stack_a);
void			rrb_quiet(t_stack *stack_b);

//Algorithm
void			sort_three(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);

#endif