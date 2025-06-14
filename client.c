/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-lae <nvan-lae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 07:33:21 by nvan-lae          #+#    #+#             */
/*   Updated: 2025/06/09 16:37:51 by nvan-lae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>

void	ft_send(int cid, unsigned char c)
{
	int				i;
	unsigned char	octet_tmp;

	octet_tmp = octet;
	i = 8;
	while (i-- > 0)
	{
		octet_tmp = octet >> i;
		if (octet_tmp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int ac, char **av)
{
	int		cid;
	int		i;
	char	**str;

	if (ac != 3)
		return (0);
	cid = ft_atoi(av[1]);
	str = av[2];
	i = 0;
	while (str[i])
	{
		ft_send(cid, (unsigned char)str[i]);
		i++;
	}
	return (0);
}
