/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:31:59 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/21 12:20:37 by mseghrou         ###   ########.fr       */
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
#endif