/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_fifth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:58:40 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:14:02 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_boss *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->b_head[0];
	while (++i < data->b_size - 1)
		data->b_head[i] = data->b_head[i + 1];
	data->b_head[data->b_size - 1] = tmp;
	write(1, "rb\n", 3);
}

void	rr(t_boss *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->a_head[0];
	while (++i < data->a_size - 1)
		data->a_head[i] = data->a_head[i + 1];
	data->a_head[data->a_size - 1] = tmp;
	i = -1;
	tmp = data->b_head[0];
	while (++i < data->b_size - 1)
		data->b_head[i] = data->b_head[i + 1];
	data->b_head[data->b_size - 1] = tmp;
	write(1, "rr\n", 3);
}

void	rra(t_boss *data)
{
	int	tmp;
	int	i;

	tmp = data->a_head[data->a_size - 1];
	i = data->a_size;
	while (--i)
		data->a_head[i] = data->a_head[i - 1];
	data->a_head[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(t_boss *data)
{
	int	tmp;
	int	i;

	tmp = data->b_head[data->b_size - 1];
	i = data->b_size;
	while (--i)
		data->b_head[i] = data->b_head[i - 1];
	data->b_head[0] = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(t_boss *data)
{
	int	tmp;
	int	i;

	tmp = data->a_head[data->a_size - 1];
	i = data->a_size;
	while (--i)
		data->a_head[i] = data->a_head[i - 1];
	data->a_head[0] = tmp;
	tmp = data->a_head[data->a_size - 1];
	i = data->a_size;
	while (--i)
		data->a_head[i] = data->a_head[i - 1];
	data->a_head[0] = tmp;
	write(1, "rrr\n", 4);
}
