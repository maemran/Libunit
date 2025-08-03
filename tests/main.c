/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:59:16 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 14:16:36 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int	main(void)
{
	int	num;

	ft_dummy_box();
	num = dummy_launcher();
	if (num == -2)
		return (1);
	return (num);
}
