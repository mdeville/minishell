/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deltab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 16:34:04 by mdeville          #+#    #+#             */
/*   Updated: 2018/02/15 16:11:31 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	deltab(char **tab)
{
	char **cpy;

	if (!tab)
		return ;
	cpy = tab;
	while (*cpy)
		free(*cpy++);
	free(tab);
	tab = NULL;
}
