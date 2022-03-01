/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:54:29 by hcremers          #+#    #+#             */
/*   Updated: 2022/02/28 17:12:46 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_tab *tabs)
{
	int	temp;

	temp = tabs->a[0];
	tabs->a[0] = tabs->a[1];
	tabs->a[1] = temp;
}

void	sb(t_tab *tabs)
{
	int	temp;

	temp = tabs->a[0];
	tabs->a[0] = tabs->a[1];
	tabs->a[1] = temp;
}

void	ss(t_tab *tabs)
{
	sa(tabs);
	sb(tabs);
}
