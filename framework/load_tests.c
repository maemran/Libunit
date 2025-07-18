/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:57:37 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 12:57:39 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void load_test(t_unit_test **list, char *name, int (*func)(void))
{
	t_unit_test *new;
	t_unit_test *last;

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
		last = *list;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}
