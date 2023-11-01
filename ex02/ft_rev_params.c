/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:53:25 by hanebaro          #+#    #+#             */
/*   Updated: 2023/11/01 04:54:39 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = argc - 1;
	while (a > 0)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			write (1, &argv[a][b], 1);
			b++;
		}
		write (1, "\n", 1);
		a--;
	}
	return (0);
}
