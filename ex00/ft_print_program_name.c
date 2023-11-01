/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:46:31 by hanebaro          #+#    #+#             */
/*   Updated: 2023/11/01 23:17:51 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	a = 0;
	(void)argc;
	while (argv[0][a] != '\0')
	{
		write(1, &argv[0][a], 1);
		a++;
	}
	write (1, "\n", 1);
	return (0);
}
