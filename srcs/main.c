/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 11:10:46 by mdeville          #+#    #+#             */
/*   Updated: 2018/02/13 17:51:50 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "minishell.h"
#include "ft_printf.h"
#include "get_next_line.h"
#include "ft_string.h"

int	main(int argc, char **argv)
{
	char	*line;

	(void)argc;
	while (42)
	{
		prompt();
		get_next_line(0, &line);
		if (!process_input(line, argv))
		{
			free(line);
			break ;
		}
		free(line);
	}
	return (0);
}
