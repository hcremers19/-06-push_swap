/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:41:17 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/03 10:35:14 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
// # include "../.wraloc/wraloc.h"

typedef struct s_tab
{
	int	*t;
	int	*a;
	int	*b;
	int	tlen;
	int	alen;
	int	blen;
	int	moves;
}	t_tab;

void	sa(t_tab *tabs);
void	sb(t_tab *tabs);
void	ss(t_tab *tabs);
void	ra(t_tab *tabs);
void	rb(t_tab *tabs);
void	rr(t_tab *tabs);
void	rra(t_tab *tabs);
void	rrb(t_tab *tabs);
void	rrr(t_tab *tabs);
void	pa(t_tab *tabs);
void	pb(t_tab *tabs);
void	radix_sort(t_tab *tabs);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *s);
void	ft_putnbr_fd(int n, int fd);

#endif