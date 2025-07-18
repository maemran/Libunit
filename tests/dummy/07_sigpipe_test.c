/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_sigpipe_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:15:26 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 14:42:34 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

//SIGPIPE – Broken Pipe
//A process wrote to a pipe or socket, but the reading end is closed.
int sigpipe_test(void)
{
    int     pipefd[2];
    pid_t   pid;

    if (pipe(pipefd) == -1)
        return 1;
    pid = fork();
    if (pid == -1)
        return 1;
    if (pid == 0)
    {
        close(pipefd[0]);
        exit(0);
    }
    else
    {
        close(pipefd[0]);
        wait(NULL);
        write(pipefd[1], "X", 1);
        close(pipefd[1]);
    }
    return 0;
}
