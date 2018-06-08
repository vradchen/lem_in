/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_room.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 19:12:00 by vradchen          #+#    #+#             */
/*   Updated: 2018/06/06 19:12:02 by vradchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_initial_room(t_room *r)
{
	r->st = 0;
	r->end = 0;
	r->link = NULL;
	r->name = NULL;
	r->next = NULL;
	r->x = 0;
	r->y = 0;
	r->ant = 0;
	r->depth = 0;
}
