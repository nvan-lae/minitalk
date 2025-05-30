/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-lae <nvan-lae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 07:33:31 by nvan-lae          #+#    #+#             */
/*   Updated: 2025/05/29 20:37:14 by nvan-lae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int	main(void)
{
	pid_t	server_pid;

	server_pid = getpid();
	ft_printf("%d\n", server_pid);
}
