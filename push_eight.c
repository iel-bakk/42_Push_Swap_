/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_eight.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:16:16 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:13:43 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_element_b(t_boss *data, int element)
{
	int	start;
	int	end;
	int	i;

	start = 0;
	while (data->b_head[start])
	{
		if (data->b_head[start] == element)
			break ;
		start++;
	}
	end = 1;
	i = data->b_size - 1;
	while (data->b_head[i])
	{
		if (data->b_head[i] == element)
			break ;
		end++;
		i--;
	}
	send_b(data, start, end);
}

void	send(t_boss *data, int start, int end)
{
	if (start > end)
	{
		while (end--)
			rra(data);
		pb(data);
	}
	else
	{
		while (start--)
			ra(data);
		pb(data);
	}
}

void	send_b(t_boss *data, int start, int end)
{
	if (start > end)
	{
		while (end--)
			rrb(data);
		pa(data);
	}
	else
	{
		while (start--)
			rb(data);
		pa(data);
	}
}

int	get_min(t_boss *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->a_head[0];
	while (i < data->a_size)
	{
		if (tmp > data->a_head[i])
			tmp = data->a_head[i];
		i++;
	}
	return (tmp);
}

void	sort_int_tab(int *tab, int len)
{
	int	check;
	int	redo;

	redo = 0;
	check = 0;
	while (check < len - 1)
	{
		if (tab[check] > tab[check + 1])
			ft_swap(&tab[check], &tab[check + 1]);
		check++;
	}
	check = 0;
	while (check < len - 1)
	{
		if (tab[check] > tab[check + 1])
			redo = 1;
		check++;
	}
	if (redo)
		sort_int_tab(tab, len);
}
