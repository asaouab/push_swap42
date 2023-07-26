/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:24:44 by asaouab           #+#    #+#             */
/*   Updated: 2023/07/26 14:04:13 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>

typedef struct s_list
{
    int a;
    int att;
    struct s_list *next;
}t_list;
typedef struct stack
{
    int *a;
    int *b;
    int size;
    char *stack;

}t_stack;

char	**ft_split(char const *s, char c);
int	ft_atoi(const char *str);
void ft_check(char **argv);
void more_check(char **argv);
void check_dup_num(char** argv);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(int size, char **strs, char *sep);
void ft_actions(t_list);
#endif
