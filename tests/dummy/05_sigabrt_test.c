/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_sigabrt_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:15:58 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 14:41:13 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

//SIGABRT – Abort Signal
// (signal abort) is raised by your program itself
//when it decides something is fatally wrong and wants to abort execution.
int sigabrt_test(void)
{
    abort();
    return 0; 
}