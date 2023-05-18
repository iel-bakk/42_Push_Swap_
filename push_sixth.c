/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sixth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:12:37 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:17:00 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	zero(int tmp, t_boss *data)
{
	if (tmp == 0)
	{
		if (data->a_head[1] > data->a_head[2])
		{
			rra(data);
			sa(data);
		}
	}
	else if (tmp == 1)
	{
		if (data->a_head[0] > data->a_head[2])
			ra(data);
		else
			sa(data);
	}
	else
	{
		if (data->a_head[0] < data->a_head[1])
			rra(data);
		else
		{
			sa(data);
			rra(data);
		}
	}
}

void	sort_three(t_boss *data)
{
	int	tmp;

	tmp = min_index(data);
	zero(tmp, data);
}

int	min_index(t_boss *data)
{
	if (data->a_head[0] < data->a_head[1] && data->a_head[0] < data->a_head[2])
		return (0);
	else if (data->a_head[1] < data->a_head[0]
		&& data->a_head[1] < data->a_head[2])
		return (1);
	else
		return (2);
}

int	sort_check(t_boss *data)
{
	int	loop;

	loop = 0;
	while (loop + 1 < data->a_size)
	{
		if (data->a_head[loop] < data->a_head[loop + 1])
			loop++;
		else
			return (0);
	}
	return (1);
}

void	sort_five(t_boss *data)
{
	int	min1;
	int	min2;
	int	i;

	i = -1;
	min1 = get_min(data);
	send_element(data, min1);
	min2 = get_min(data);
	send_element(data, min2);
	sort_three(data);
	pa(data);
	pa(data);
}
