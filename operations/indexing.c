

#include "push_swap.h"

t_stack	*get_min(t_stack *stack)
{
	t_stack	*min;

	min = NULL;
	while (stack)
	{
		if (stack->index == -1)
		{
			if (!min || stack->data < min->data)
				min = stack;
		}
		stack = stack->next;
	}
	return (min);
}
void	assign_index(t_stack *stack)
{
	t_stack	*min;
	int		i;

	i = 0;
	while (1)
	{
		min = get_min(stack);
		if (!min)
			break ;
		min->index = i;
		i++;
	}
}
