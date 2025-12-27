/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 10:08:19 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 16:34:00 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int data)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_back(t_stack **head, t_stack *node)
{
	t_stack	*current;

	if (!*head)
	{
		*head = node;
		return ;
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = node;
}

int	stack_size(t_stack *head)
{
	int	count;

	count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

void	clear_stack(t_stack **head)
{
	t_stack	*next_node;

	if (!head || !*head)
		return ;
	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
