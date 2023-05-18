/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_second.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:53:34 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:25:34 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mi_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	parse(int ac, char **av, t_boss *stacks)
{
	int		loop;
	char	*ptr;

	loop = 1;
	while (loop < ac)
	{
		ptr = av[loop++];
		while (*ptr)
			stacks->a_head[stacks->b_size++] = ft_atoi(&ptr, stacks);
	}
	stacks->b_size = 0;
}

int	ft_atoi(char **str, t_boss *data)
{
	int				sign;
	unsigned int	result;
	char			*tmp;

	sign = 1;
	result = 0;
	tmp = *str;
	while (*tmp == 32 || (*tmp >= 9 && *tmp <= 13))
		tmp++;
	if (*tmp == '-' || *tmp == '+')
	{
		if (*tmp == '-')
			sign *= -1;
		tmp++;
	}
	while (*tmp >= '0' && *tmp <= '9')
	{
		result = result * 10 + (*tmp - 48);
		tmp++;
	}
	*str = tmp;
	max_check(result, sign, data);
	return ((int)result * sign);
}

void	init_struct(t_boss *data)
{
	data->a_head = NULL;
	data->b_head = NULL;
	data->a_size = 0;
	data->b_size = 0;
}

void	doubles_check(t_boss *data)
{
	int	loop;
	int	loop1;
	int	tmp;

	loop = 0;
	while (loop < data->a_size)
	{
		loop1 = 0;
		tmp = data->a_head[loop];
		while (loop1 < data->a_size)
		{
			if (loop1 != loop && data->a_head[loop1] == tmp)
			{
				write(2, "Error\n", 6);
				mifree(data);
			}
			loop1++;
		}
		loop++;
	}
}
