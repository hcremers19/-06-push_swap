#include "push_swap.h"

int	*ft_push(int *stk1, int *stk2)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (stk1[i1])
		i1++;
	while (stk2[i2])
		i2++;
	stk1[i1] = stk2[i2];
	return (stk1);
}
