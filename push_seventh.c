/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_seventh.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:14:18 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:16:17 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	max_check(unsigned int result, int sign, t_boss *data)
{
	if ((result > MAX_INT && sign == 1) || (result > MAX_INT + 1 && sign == -1))
	{
		free(data->a_head);
		free(data->b_head);
		write(2, "Error\n", 5);
		exit(1);
	}
}

void	sort_four(t_boss *data)
{
	int	min;

	min = get_min(data);
	send_element(data, min);
	sort_three(data);
	pa(data);
}

int	get_max(t_boss *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->a_head[0];
	while (i < data->a_size)
	{
		if (tmp < data->a_head[i])
		{
			tmp = data->a_head[i];
		}
		i++;
	}
	return (tmp);
}

int	get_max_b(t_boss *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->b_head[0];
	while (i < data->b_size)
	{
		if (tmp < data->b_head[i])
		{
			tmp = data->b_head[i];
		}
		i++;
	}
	return (tmp);
}

void	send_element(t_boss *data, int element)
{
	int	start;
	int	end;
	int	i;

	start = 0;
	while (data->a_head[start])
	{
		if (data->a_head[start] == element)
			break ;
		start++;
	}
	end = 1;
	i = data->a_size - 1;
	while (data->a_head[i])
	{
		if (data->a_head[i] == element)
			break ;
		end++;
		i--;
	}
	send(data, start, end);
}
