
#include "push_swap.h"

void	sort_2(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	if ((*a)->data > (*a)->next->data)
		sa(a);
}
