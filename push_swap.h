/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemseghrouchniidrissi <meryemseghrou    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:29:40 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 14:51:23 by meryemseghr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

char				**ft_split(char const *s, char c);
long				ft_atol(const char *s);
char				*ft_strdup(const char *s);
size_t				ft_strlen(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
t_stack				*create_node(int data);
void				add_node_back(t_stack **head, t_stack *node);
int					stack_size(t_stack *head);
void				clear_stack(t_stack **head);
int					is_number(char *s);
t_stack				*get_min(t_stack *stack);
void				assign_index(t_stack *stack);
int					is_duplicate(t_stack *stack, int value);
void				verified(int argc, char **argv, t_stack **a);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				sort_2(t_stack **a);
void				sort_3(t_stack **a);
int					get_position(t_stack *a, int index);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);
int					get_pos(t_stack *stack, int index);
void				push_to_b(t_stack **a, t_stack **b, int chunk);
void				push_to_a(t_stack **a, t_stack **b);
void				sort_stack(t_stack **a, t_stack **b, int chunk);
void				free_split(char **split);
void				error_exit(t_stack **a);

#endif