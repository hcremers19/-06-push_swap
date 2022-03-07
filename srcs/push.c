/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:52:49 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/07 15:55:14 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	pa(t_tab *tabs)
// {
// 	tabs->alen++;
// 	tabs->a[tabs->alen - 1] = tabs->b[tabs->blen - 1];
// 	tabs->blen--;
// 	ft_putstr_fd("pa\n", 1);
// 	tabs->moves++;
// }

// void	pb(t_tab *tabs)
// {
// 	tabs->blen++;
// 	tabs->b[tabs->blen - 1] = tabs->a[tabs->alen - 1];
// 	tabs->alen--;
// 	ft_putstr_fd("pb\n", 1);
// 	tabs->moves++;
// }

void	push_a(t_tab *tabs)
{
	int	i;
	int	const_len;

	i = 0;
	const_len = tabs->alen;
	tabs->alen++;
	// if (tabs->blen > 0)
	// {
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
	// }
	tabs->blen--;
	write(1, "pa\n", 3);
	tabs->moves++;
}

void	push_b(t_tab *tabs)
{
	int	i;
	int	const_len;

	i = 0;
	const_len = tabs->blen;
	tabs->blen++;
	// if (tabs->alen > 0)
	// {
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
	// }
	tabs->alen--;
	write(1, "pb\n", 3);
	tabs->moves++;
}
