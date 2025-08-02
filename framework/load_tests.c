/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:57:37 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 11:34:21 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void load_test(t_unit_test **list, char *name, int (*func)(void))
{
	t_unit_test *new;
	t_unit_test *head;

	new = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!new)
		return;
	new->name = name;
	new->func = func;
	new->next = NULL;
	if (!*list)
		*list = new;
	else
	{
		head = *list;
		while ((*list)->next)
			(*list) = (*list)->next;
		(*list)->next = new;
		*list = head;
	}
}
