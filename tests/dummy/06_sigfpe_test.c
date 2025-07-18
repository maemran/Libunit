/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigfpe_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:15:44 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 14:33:54 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

//SIGFPE – Floating Point Exception
//An error occurred during arithmetic operations.
int sigfpe_test(void)
{
    volatile int    x;
    volatile int    y;
    int             z;
    
    x = 1;
    y = 0;
    z = x / y;
    (void)z;
    return 0;
}
