/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_tenth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:50:46 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:10:53 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_boss *data)
{
	if (data->a_size == 2)
		sa(data);
	if (data->a_size == 3)
		sort_three(data);
	else if (data->a_size == 4)
		sort_four(data);
	else if (data->a_size == 5)
		sort_five(data);
	else if (data->a_size > 5 && data->a_size <= 100)
		sort_the_hundred(data, 2);
	else
		sort_the_hundred(data, 9);
}

void	re_push(t_boss *data)
{
	int	max;
	int	size;

	size = data->b_size;
	while (size--)
	{
		max = get_max_b(data);
		send_element_b(data, max);
	}
}
