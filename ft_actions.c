/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:01:10 by asaouab           #+#    #+#             */
/*   Updated: 2023/07/26 14:06:12 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

void ft_actions(t_list)
{
    int i;
    i = 0;
    t_stack stack.a;
    t_stack stack.b;
    t_stack size;
    stack.a = strlen(t_list att);
    size = malloc(t_list);
    if(!size)
    {
        write(2,"error in the malloc stack a",28);
        exit(1);
        free(stack.a);
    }
    stack.b = size;
    size = malloc(sizeof(char));
    while(i < size)
    {
        stack.a = ft_atoi(i);
        i++;
    }

    
    

}