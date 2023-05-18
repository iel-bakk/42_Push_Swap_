/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_third.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:55:54 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:20:52 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mifree(t_boss *data)
{
	free(data->a_head);
	free(data->b_head);
	data->a_head = NULL;
	data->b_head = NULL;
	exit(0);
}

void	already_sorted(t_boss *data)
{
	int	loop;

	loop = 0;
	while (loop + 1 < data->a_size)
	{
		if (data->a_head[loop] < data->a_head[loop + 1])
			loop++;
		else
			return ;
	}
	mifree(data);
}

// stack functoins

void	sa(t_boss *data)
{
	ft_swap(data->a_head, data->a_head + 1);
	write(1, "sa\n", 3);
}

void	sb(t_boss *data)
{
	ft_swap(data->b_head, data->b_head + 1);
	write(1, "sb\n", 3);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
