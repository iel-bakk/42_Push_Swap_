/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:04:27 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:20:37 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT (unsigned int)2147483647

//libraries

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// struct

typedef struct s_boss{
	int	a_size;
	int	b_size;
	int	*a_head;
	int	*b_head;
}	t_boss;

//parsing functions

int		check(int ac, char **av);
void	check_arg(char *str, int *count);
void	mi_exit(void);
int		ft_atoi(char **str, t_boss *data);
void	init_struct(t_boss *data);
void	parse(int ac, char **av, t_boss *stacks);
void	mifree(t_boss *data);
void	doubles_check(t_boss *data);
void	already_sorted(t_boss *data);
void	allocate_stacks(t_boss *data);
void	max_check(unsigned int result, int sign, t_boss *data);

// stack functions

void	sb(t_boss *data);
void	sa(t_boss *data);
void	ft_swap(int *a, int *b);
void	pb(t_boss *data);
void	pa(t_boss *data);
void	ss(t_boss *data);
void	ra(t_boss *data);
void	rb(t_boss *data);
void	rr(t_boss *data);
void	rra(t_boss *data);
void	rrb(t_boss *data);
void	rrr(t_boss *data);

// sorting functions

void	zero(int tmp, t_boss *data);
int		min_index(t_boss *data);
void	sort_three(t_boss *data);
int		sort_check(t_boss *data);
void	sort_five(t_boss *data);
void	send_element(t_boss *data, int index);
void	send_element_b(t_boss *data, int index);
int		get_max(t_boss *data);
int		get_max_b(t_boss *data);
void	send(t_boss *data, int start, int end);
void	send_b(t_boss *data, int start, int end);
int		get_min(t_boss *data);
void	sort_four(t_boss *data);
void	sort_int_tab(int *tab, int len);
int		get_pivot(t_boss *data, int *mid, int div);
void	sort_the_hundred(t_boss *data, int div);
void	sort(t_boss *data);
void	re_push(t_boss *data);
int		one_more(t_boss *data, int pivot);
void	from_a_to_b(t_boss *data, int div);
void	from_a_to_b_containter(t_boss *data, int div, int pivot, int mid);

#endif