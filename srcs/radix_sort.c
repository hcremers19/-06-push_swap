/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:54:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/03 13:47:12 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_t(t_tab *tabs)	// À retester pour être sûr de ne pas sortir du tableau
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (i < tabs->tlen - 1)
	{
		if (tabs->t[i] > tabs->t[i + 1])
		{
			temp = tabs->t[i];
			tabs->t[i] = tabs->t[i + 1];
			tabs->t[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

void	convert_nbrs(t_tab *tabs)
{
	int	a_index;
	int	t_index;

	a_index = 0;
	while (a_index < tabs->alen)
	{
		t_index = 0;
		while (t_index < tabs->tlen)
		{
			if (tabs->t[t_index] == tabs->a[a_index])
			{
				tabs->a[a_index] = t_index;
				break ;
			}
			t_index++;
		}
		a_index++;
	}
}

int	bitmax(t_tab *tabs)
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

	sort_t(tabs);
	convert_nbrs(tabs);
	bit = 0;
	while (bit < bitmax(tabs))
	{
		turn = 0;
		while (turn < tabs->tlen)
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
