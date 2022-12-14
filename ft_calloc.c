/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:12:33 by elerner           #+#    #+#             */
/*   Updated: 2022/12/21 20:53:47 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_calloc asigna  memoria  para  una  matriz  de  nmemb elementos 
	de size bytes cada uno y devuelve un puntero a la memoria asignada. 
	La memoria es puesta a cero.
*/

void	*ft_calloc(size_t n_Element, size_t size_Element)
{
	void	*tmp;

	tmp = (void *)malloc(n_Element * size_Element);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, n_Element * size_Element);
	return (tmp);
}
