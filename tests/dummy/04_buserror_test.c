/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buserror_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:49:17 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 13:37:16 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

#if defined(__i386__)
# undef FLAG
# define FLAG 0
#elif defined(__x86_64__)
# undef FLAG
# define FLAG 1
#endif

int	buserror_test(void)
{
	char	arr[4];
	int		*ptr;

	if (FLAG == 1)
		__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	else
		__asm__("pushf\norl $0x40000,(%esp)\npopf");
	ptr = (int *)(arr + 1);
	*ptr = 42;
	return (0);
}
