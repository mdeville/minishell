/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 13:44:41 by mdeville          #+#    #+#             */
/*   Updated: 2018/02/15 18:30:59 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "minishell.h"
#include "ft_string.h"
#include "ft_printf.h"
#include "path.h"

void	prompt(void)
{
	char		*tmp;
	static char	user[100] = "";

	if (!*user && (tmp = ft_getenv("USER")))
	{
		ft_strncpy(user, tmp, 100);
		user[99] = '\0';
	}
	if ((tmp = ft_getenv("PWD")))
		ft_printf("[%s] %s $> ", ft_basename(tmp), user);
	else if ((tmp = getcwd(NULL, 0)))
	{
		ft_printf("[%s] %s $> ", ft_basename(tmp), user);
		free(tmp);
	}
	else
		ft_printf("[No Directory] %s $> ", user);
}
