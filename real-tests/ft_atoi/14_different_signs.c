/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_different_signs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:58:54 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 17:59:24 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int different_signs_test(void)
{
    if (ft_atoi("-+42") == 0)
        return (0);
    else
        return (-1);
}
