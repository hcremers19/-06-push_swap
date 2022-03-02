/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:08:46 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/02 14:07:24 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_tab *tabs)
{
	int	temp;
	int	i;

	i = 0;
	temp = tabs->a[0];
	while (i < (tabs->alen - 1))
	{
		tabs->a[i] = tabs->a[i + 1];
		i++;
	}
	tabs->a[i] = temp;
	ft_putstr_fd("rra\n", 1);
	tabs->moves++;
}

void	rrb(t_tab *tabs)
{
	int	temp;
	int	i;

	i = 0;
	temp = tabs->b[0];
	while (i < (tabs->alen - 1))
	{
		tabs->b[i] = tabs->b[i + 1];
		i++;
	}
	tabs->b[i] = temp;
	ft_putstr_fd("rrb\n", 1);
	tabs->moves++;
}

void	rrr(t_tab *tabs)
{
	rra(tabs);
	rrb(tabs);
	tabs->moves--;
}
