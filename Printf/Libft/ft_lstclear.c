/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:15:56 by tpons             #+#    #+#             */
/*   Updated: 2019/10/22 13:16:35 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lstb;
	t_list	*save;

	lstb = *lst;
	while (lstb)
	{
		save = lstb->next;
		ft_lstdelone(lstb, del);
		lstb = save;
	}
	*lst = NULL;
}
