/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:38:08 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/01 15:20:05 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_tab *tabs)
{
	int	temp;
	int	i;

	i = tabs->alen - 1;
	temp = tabs->a[i];
	while (i > 0)
	{
		tabs->a[i] = tabs->a[i - 1];
		i--;
	}
	tabs->a[0] = temp;
}

void	rb(t_tab *tabs)
{
	int	temp;
	int	i;

	i = tabs->alen - 1;
	temp = tabs->b[i];
	while (i > 0)
	{
		tabs->b[i] = tabs->b[i - 1];
		i--;
	}
	tabs->b[0] = temp;
}

void	rr(t_tab *tabs)
{
	ra(tabs);
	rb(tabs);
}
