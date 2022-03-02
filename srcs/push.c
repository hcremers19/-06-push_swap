/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:52:49 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/02 12:18:40 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_tab *tabs)
{
	tabs->alen++;
	tabs->a[tabs->alen - 1] = tabs->b[tabs->blen - 1];
	tabs->blen--;
	ft_putstr_fd("pa\n", 1);
	tabs->moves_nbr++;
}

void	pb(t_tab *tabs)
{
	tabs->blen++;
	tabs->b[tabs->blen - 1] = tabs->a[tabs->alen - 1];
	tabs->alen--;
	ft_putstr_fd("pb\n", 1);
	tabs->moves_nbr++;
}
