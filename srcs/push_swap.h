/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:41:17 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/15 18:01:16 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
// # include "../.wraloc/wraloc.h"

typedef struct s_tab
{
	int	*t;
	int	*a;
	int	*b;
	int	tlen;
	int	alen;
	int	blen;
	int	err;
}	t_tab;

void	sa(t_tab *tabs, int write);
void	sb(t_tab *tabs, int write);
void	ss(t_tab *tabs);
void	ra(t_tab *tabs, int write);
void	rb(t_tab *tabs, int write);
void	rr(t_tab *tabs);
void	rra(t_tab *tabs, int write);
void	rrb(t_tab *tabs, int write);
void	rrr(t_tab *tabs);
void	pa(t_tab *tabs);
void	pb(t_tab *tabs);

void	sort_two(t_tab *tabs);
void	sort_three(t_tab *tabs);
void	sort_four(t_tab *tabs);
void	sort_five(t_tab *tabs);
void	sort_six(t_tab *tabs);
void	radix_sort(t_tab *tabs);

int		check_args(int argc, char **argv);
int		check_doubles(t_tab *tabs);
int		check_order(t_tab *tabs);
int		convert_args(t_tab *tabs, char **argv);
int		errors(t_tab *tabs, int all);
int		free_several(t_tab *tabs, int nbr);
int		init_values(t_tab *tabs, int argc);
void	sort_more(t_tab *tabs, int argc);

/* libft */

void	ft_putstr_fd(char *str, int fd);
int		ft_atoi(t_tab *tabs, const char *str);
int		ft_isdigit(int c);

#endif