/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_nine.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:45:36 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:15:21 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pivot(t_boss *data, int *mid, int div)
{
	int	*tab;
	int	i;
	int	pivot;

	i = 0;
	tab = (int *)malloc(sizeof(int) * data->a_size);
	if (!tab)
	{
		write(2, "Error\n", 6);
		mifree(data);
	}
	while (i < data->a_size)
	{
		tab[i] = data->a_head[i];
		i++;
	}
	sort_int_tab(tab, data->a_size);
	i = data->a_size / div;
	pivot = tab[i];
	i = i / 2;
	*mid = tab[i];
	free(tab);
	tab = NULL;
	return (pivot);
}

void	sort_the_hundred(t_boss *data, int div)
{
	from_a_to_b(data, div);
	if (div == 2)
		sort_three(data);
	if (div == 9)
		sort_the_hundred(data, 2);
	re_push(data);
}

int	one_more(t_boss *data, int pivot)
{
	int	i;

	i = 0;
	while (i < data->a_size)
	{
		if (data->a_head[i] < pivot)
			return (1);
		i++;
	}
	return (0);
}

void	from_a_to_b(t_boss *data, int div)
{
	int	pivot;
	int	mid;

	pivot = get_pivot(data, &mid, div);
	from_a_to_b_containter(data, div, pivot, mid);
}

void	from_a_to_b_containter(t_boss *data, int div, int pivot, int mid)
{
	while (1)
	{
		if (!one_more(data, pivot))
			pivot = get_pivot(data, &mid, div);
		if (data->a_head[0] < pivot && data->a_head[0] < mid
			&& data->a_head[1] > pivot)
		{
			pb(data);
			rr(data);
		}
		else if (data->a_head[0] < pivot)
		{
			pb(data);
			if (data->b_head[0] < mid && data->b_size > 1)
				rb(data);
		}
		else
			ra(data);
		if (div == 2)
			if (data->a_size == 3)
				break ;
		if (div == 9)
			if (data->a_size == 9)
				break ;
	}
}
