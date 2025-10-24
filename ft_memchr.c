/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:19:07 by obakri            #+#    #+#             */
/*   Updated: 2025/10/23 11:25:11 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

 void	*ft_memchr(const void *s, int c, size_t n)
 {
           size_t	i;
    
           i = 0;
           if(n == 0 && s == NULL)
                  return NULL;
           while(i < n){
                   if(((unsigned char*)s)[i] == (unsigned char) c)
                           return ((void*)s+i);
                   i++;
           }
           return (NULL) ;
 }   
