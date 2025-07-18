/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_multi_negative_sign.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:34:46 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 17:16:27 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int multi_negative_sign_test(void)
{
    if (ft_atoi("--123") == 0)
        return (0);
    else
        return (-1);
}
