/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:17:12 by mdeville          #+#    #+#             */
/*   Updated: 2018/02/15 18:25:14 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "ft_printf.h"

void	ft_env(void)
{
	extern t_shell	sh;
	size_t			i;

	i = 0;
	while (sh.env[i])
		ft_printf("%s\n", sh.env[i++]);
}
