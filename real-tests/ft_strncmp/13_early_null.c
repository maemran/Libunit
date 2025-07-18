/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_early_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:12:00 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 19:12:38 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int early_null(void)
{
    if (ft_strncmp("abc\0def", "abcxyz", 7) == -120)
        return (0);
    else
        return (-1);
}
