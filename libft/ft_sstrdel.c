/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <alao@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/0216:20:58 by alao              #+#    #+#             */
/*   Updated: 2017/07/02 20:35:23 by alao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
** The ft_sstrdel() will free the char **s and set every pointer to NULL
*/

void	ft_sstrdel(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_memdel((void *)&s[i++]);
	}
	ft_memdel((void *)&s);
}
