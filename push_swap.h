/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemseghrouchniidrissi <meryemseghrou    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:31:59 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/23 10:39:59 by meryemseghr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>


typedef struct  s_stack
{
    int data;
    int index;
    struct  s_stack *next;
}t_stack;

char	**ft_split(char const *s, char c);
int	ft_atoi(const char *nptr);
t_stack	*create_node(int data);
void	add_node_back(t_stack **head, t_stack *node);
int	stack_size(t_stack *head);
void	clear_stack(t_stack **head);
int	is_number(char *s);
int	is_duplicate(t_stack *stack, int value);
void	verified(int argc, char **argv, t_stack **a);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
#endif