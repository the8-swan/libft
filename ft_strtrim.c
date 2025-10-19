/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:00:28 by obakri            #+#    #+#             */
/*   Updated: 2025/10/19 09:47:49 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


void	ft_trimstart(char const* s1 , char const* set , size_t* start){
	size_t	iset;

	iset = 0;
	while(s1[*start] && set[iset])
	{
		if(s1[*start] == set[iset]){
			(*start)++;
			iset = 0;
		}else
			iset++;
	}
}
void    ft_trimend(char const* s1 , char const* set , size_t* end , size_t start){
	size_t	iset;

	iset = 0;		
	while(*end > start && set[iset]){
		if(s1[*end] == set[iset]){
			(*end)--; 
			iset =0;
		}else 
			iset++;
	}
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char*	ptr;


	start = 0;
	end = ft_strlen(s1)-1;
	i = 0;
	if(s1 == NULL || set == NULL )
		return (NULL);
	ft_trimstart(s1,set,&start);
	ft_trimend(s1,set,&end,start);
	ptr = malloc((end - start + 1)*sizeof(char));
	if(!ptr)
		return (NULL);
	while(start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
