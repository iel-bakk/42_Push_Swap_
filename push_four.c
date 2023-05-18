/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:56:46 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/28 02:55:56 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_boss *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->a_head[0];
	while (++i < data->a_size - 1)
		data->a_head[i] = data->a_head[i + 1];
	i = data->b_size;
	while (i)
	{
		data->b_head[i] = data->b_head[i - 1];
		i--;
	}
	data->b_head[0] = tmp;
	data->b_size++;
	data->a_size--;
	write(1, "pb\n", 3);
}

void	pa(t_boss *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->b_head[0];
	while (++i < data->b_size - 1)
		data->b_head[i] = data->b_head[i + 1];
	i = data->a_size;
	while (i)
	{
		data->a_head[i] = data->a_head[i - 1];
		i--;
	}
	data->a_head[0] = tmp;
	data->a_size++;
	data->b_size--;
	write(1, "pa\n", 3);
}

void	allocate_stacks(t_boss *data)
{
	data->a_head = (int *)malloc(sizeof(int) * data->a_size);
	if (!data->a_head)
		mi_exit();
	data->b_head = (int *)malloc(sizeof(int) * data->a_size);
	if (!data->b_head)
		mi_exit();
}

void	ss(t_boss *data)
{
	ft_swap(data->a_head, data->a_head + 1);
	ft_swap(data->b_head, data->b_head + 1);
	write(1, "ss\n", 3);
}

void	ra(t_boss *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->a_head[0];
	while (++i < data->a_size - 1)
		data->a_head[i] = data->a_head[i + 1];
	data->a_head[data->a_size - 1] = tmp;
	write(1, "ra\n", 3);
}
