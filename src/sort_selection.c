/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_selection.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:23:53 by gelgasim          #+#    #+#             */
/*   Updated: 2026/11/18 14:29:37 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_ctx *c)
{
	if (c->a.size < 2)
		return ;
	while (c->a.size > 0)
	{
		a_to_top(c, min_index(&c->a));
		op_pb(c);
	}
	while (c->b.size > 0)
		op_pa(c);
}
