/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buserror_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:49:17 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 14:42:40 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

//SIGBUS - Bus Error) is a signal sent by the operating system when a program
//tries to access memory in an invalid way, but not due to a null or invalid pointer
//(that would be SIGSEGV). Instead, it's caused by hardware-level restrictions.
int	buserror_test(void)
{
    char arr[4];
    int *p = (int *)(arr + 1); // misaligned pointer
    *p = 42; // writing to misaligned address
    return (0);
}