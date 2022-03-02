/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:54:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/02 18:07:40 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void convert_nbrs(t_tab *tabs)
{
	int	index;
	int	place;

	place = 0;
	while (place < tabs->alen - 1)
	{
		index = 0;
		while (index < tabs->alen - 1)
		{
			
		}
	}
}

// void	init_a(t_tab *tabs)
// {
// 	int	a_index;
// 	int	t_index;

// 	a_index = 0;
// 	while (a_index < tabs->tlen)
// 	{
// 		t_index = 0;
// 		while (t_index < tabs->tlen)
// 		{
// 			if (tabs->t[t_index] == tabs->a[a_index])
// 			{
// 				tabs->a[a_index] = t_index;
// 				break ;
// 			}
// 			t_index++;
// 		}
// 		a_index++;
// 	}
// }

int	bits_nbr(t_tab *tabs)
{
	int	bits;
	int	a_max;

	bits = 1;
	a_max = tabs->alen - 1;
	while (a_max > 1)
	{
		a_max /= 2;
		bits++;
	}
	return (bits);
}

void	radix_sort(t_tab *tabs)
{
	int	bit;
	int	turn;
	int	const_alen;

	const_alen = tabs->alen;
	bit = 0;
	while (bit < 32)
	{
		turn = 0;
		while (turn < const_alen)
		{
			if ((((tabs->a[tabs->alen - 1] >> bit) & 1) % 2) == 1)
				pb(tabs);
			else
				ra(tabs);
			turn++;
		}
		while (tabs->blen)
			pa(tabs);
		bit++;
	}
}
