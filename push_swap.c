/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:47:26 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:18:03 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_boss	stacks;

	init_struct(&stacks);
	stacks.a_size = check(ac, av);
	allocate_stacks(&stacks);
	parse(ac, av, &stacks);
	doubles_check(&stacks);
	already_sorted(&stacks);
	sort(&stacks);
	return (0);
}
