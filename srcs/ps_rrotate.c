/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:38:08 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/15 17:51:52 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_tab *tabs, int write)
{
	int	temp;
	int	i;

	i = tabs->alen - 1;
	temp = tabs->a[i];
	if (tabs->alen > 1)
	{
		while (i > 0)
		{
			tabs->a[i] = tabs->a[i - 1];
			i--;
		}
		tabs->a[0] = temp;
	}
	if (write)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_tab *tabs, int write)
{
	int	temp;
	int	i;

	i = tabs->alen - 1;
	temp = tabs->b[i];
	if (tabs->blen > 1)
	{
		while (i > 0)
		{
			tabs->b[i] = tabs->b[i - 1];
			i--;
		}
		tabs->b[0] = temp;
	}
	if (write)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_tab *tabs)
{
	rra(tabs, 0);
	rrb(tabs, 0);
	ft_putstr_fd("rrr\n", 1);
}
