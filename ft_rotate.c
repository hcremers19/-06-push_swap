#include "push_swap.h"

int	*ft_rotate(int *stk)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (stk[i])
		i++;
	j = i;
	i = 0;
	temp = stk[0];
	while (i < j)
	{
		stk[i] = stk[i + 1];
		i++;
	}
	stk[i] = temp;
	return (stk);
}
