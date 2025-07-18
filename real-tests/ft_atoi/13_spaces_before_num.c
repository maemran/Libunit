/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_spaces_before_num.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:56:59 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 17:57:09 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int spaces_before_num_test(void)
{
    if (ft_atoi("   42") == 42)
        return (0);
    else
        return (-1);
}
