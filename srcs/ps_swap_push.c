/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:54:29 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/15 17:52:03 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_tab *tabs, int write)
{
	int	temp;

	temp = tabs->a[0];
	if (tabs->alen > 1)
	{
		tabs->a[0] = tabs->a[1];
		tabs->a[1] = temp;
	}
	if (write)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_tab *tabs, int write)
{
	int	temp;

	temp = tabs->b[0];
	if (tabs->blen > 1)
	{
		tabs->b[0] = tabs->b[1];
		tabs->b[1] = temp;
	}
	if (write)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_tab *tabs)
{
	sa(tabs, 0);
	sb(tabs, 0);
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_tab *tabs)
{
	int	i;
	int	const_len;

	i = 0;
	const_len = tabs->alen;
	tabs->alen++;
	if (tabs->blen > 0)
	{
		while (const_len > 0)
		{
			tabs->a[const_len] = tabs->a[const_len - 1];
			const_len--;
		}
		const_len = tabs->blen;
		tabs->a[0] = tabs->b[0];
		while (i < const_len)
		{
			tabs->b[i] = tabs->b[i + 1];
			if (i == const_len - 1)
				tabs->b[i] = 0;
			i++;
		}
	}
	tabs->blen--;
	write(1, "pa\n", 3);
}

void	pb(t_tab *tabs)
{
	int	i;
	int	const_len;

	i = 0;
	const_len = tabs->blen;
	tabs->blen++;
	if (tabs->alen > 0)
	{
		while (const_len > 0)
		{
			tabs->b[const_len] = tabs->b[const_len - 1];
			const_len--;
		}
		const_len = tabs->alen;
		tabs->b[0] = tabs->a[0];
		while (i < const_len - 1)
		{
			tabs->a[i] = tabs->a[i + 1];
			if (i == const_len - 1)
				tabs->a[i] = 0;
			i++;
		}
	}
	tabs->alen--;
	write(1, "pb\n", 3);
}
