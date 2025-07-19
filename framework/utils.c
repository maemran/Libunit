/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:07:29 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 04:10:55 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

size_t	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


void free_tests(t_unit_test *list)
{
    t_unit_test *tmp;
    
    while (list)
    {
        tmp = list->next;
        free(list->name);
        free(list);
        list = tmp;
    }
}

void print_signal_result(int status)
{
    int sig;

    if (WIFSIGNALED(status))
    {
        sig = WTERMSIG(status);
        if (sig == SIGSEGV)
            write(1, "[SEGV]\n", 7);
        else if (sig == SIGBUS)
            write(1, "[BUS]\n", 6);
        else if (sig == SIGABRT)
            write(1, "[ABRT]\n", 7);
        else if (sig == SIGFPE)
            write(1, "[FPE]\n", 6);
        else if (sig == SIGPIPE)
            write(1, "[PIPE]\n", 7);
        else if (sig == SIGILL)
            write(1, "[ILL]\n", 6);
        else
            write(1, "[SIGNAL]\n", 9);
    }
    else if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
        write(1, "[OK]\n", 5);
    else
        write(1, "[KO]\n", 5);
}
