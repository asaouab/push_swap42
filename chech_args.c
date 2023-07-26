/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chech_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:09:12 by asaouab           #+#    #+#             */
/*   Updated: 2023/07/26 12:50:46 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void ft_check(char **argv)
{
    int x;
    int y;
    y = 0;
    while(argv[y])
	{
		if (argv[y][0] == '\0')
		{
			write(2, "empty string", 13);
			exit(1);
		}
   		 x = 0;
		if (argv[y][x] == '+' || argv[y][x] == '-')
			x++;
		while(argv[y][x])
		{
			if (argv[y][x] < '0' || argv[y][x] > '9')
				{
					write(2, "Error :Check args!", 19);
					exit(0);
				}
			x++;
		}
		y++;
	}

} 
void more_check(char **argv)
{
	int	y;
	int	x;

	y = 0;
	while (argv[y])
	{
		x = 0;
		while (argv[y][x])
		{
			if ((argv[y][x] == '-' || argv[y][x] == '+') &&
				(argv[y][x + 1] == ' ' || argv[y][x + 1] == '\t'))
			{
				write(2, "there is tab or space in the arg", 33);
				exit(0);
			}
            if ((argv[y][x] == '-' || argv[y][x] == '+') && 
                (argv[y][x + 1] == '+' || argv[y][x + 1] == '-'))
            {
				write(2, "there is - or + in the arg", 27);
				exit(0);
			}
			x++;
		}
		y++;
	}
}
// void check_dup_num(char **argv)
// {
// 	int y;
// 	int x;
// 	y = 1;
// 	while(argv[y])
// 	{
// 		x = 0;
// 		while(argv[y][x] && argv[y][x + 1] != '\0')
// 		{
// 			if(atoi(argv[x]) == atoi(argv[x + 1]))
// 			{
// 				write(2, "duplicate numbers", 18);
// 				exit(0);
// 			}
// 			x++;
// 		}
// 		y++;
// 	}
// }
void check_dup_num(char** argv) 
{
    int y;
	y = 0;
    while (argv[y]) 
	{
        int x = y + 1; 
        while (argv[x]) 
		{
            if (atoi(argv[y]) == atoi(argv[x])) 
			{
                write(2, "Error: Duplicate numbers", 25);
                exit(1);
            }
        	x++;
        }
        y++;
    }
}
///FROM HERE START CODING THE LINKED LIST FUNCTION////

void add_back(t_list **lastnode, t_list *newnode)
{
	t_list *tmp;

	tmp = (*lastnode);
	if (!lastnode || !newnode)
		return ;
	if (tmp == NULL)
		tmp = newnode;
	else
	{
		while(tmp)
		{
			if(tmp->next == NULL)
				break;
			tmp = tmp->next;
		}
		tmp->next = newnode;
	}
}

t_list *linkedlist(int data)
{
	t_list *newnode;
	
	newnode = malloc(sizeof(t_list *));///fist
	if (newnode == NULL)
	{
		exit(1);
	}
	newnode->a = data; 
	newnode->next = NULL;
	return(newnode);
}
// void ft_fill(char **argv)
// {
// while(split[a])
// {
// 	ft_atoi(split[a]);
	
// }
// }

int main(int argc, char **argv)
{
	char *join;
	char **split;
	t_list *stack;
	t_list *one_node;
	t_list att;
	
	join = ft_strjoin(argc - 1, argv + 1, " ");
	printf("%s\n",join);
	split = ft_split(join, ' ');
	att = ft_atoi(split);
	int i = 0;
	// while (split[i])
	// {
	// 	one_node = linkedlist(ft_atoi(split[i]));
	// 	add_back(&stack, one_node);
	// 	i++;
	// }
	// while (stack)
	// {
	// 	printf("%d\n",stack->a);
	// 	stack = stack->next;
	// }
	
    ft_check(split);
    // more_check(split);
	check_dup_num(split);
	// atoi(argv[0]);

}

	
