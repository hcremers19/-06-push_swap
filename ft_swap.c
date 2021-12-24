#include "push_swap.h"

int	*ft_swap(int *stk)
{
	int	temp;

	temp = stk[0];
	stk[0] = stk[1];
	stk[1] = temp;
	return (stk);
}
