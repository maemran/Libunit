/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_sigill_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:14:56 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 14:42:32 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

//SIGILL – Illegal Instruction
//The CPU tried to execute an invalid or undefined machine instruction.
int sigill_test(void)
{
    raise(SIGILL);
    return 0;
}