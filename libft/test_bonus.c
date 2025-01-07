
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_str_toupper(void *c)
{
	char *str = (char *)c;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

int main(void)
{
    printf("step 1 creat a node:\n");
    t_list  *my_list = ft_lstnew(ft_strdup("node 1"));
    if(my_list)
	{
		printf("my node is: %s\n", (char *)my_list ->content);
	}
	else
	{
		printf("failed to create node");
	}

	printf("step 2 add a new node to front:\n");
    ft_lstadd_front(&my_list, ft_lstnew(ft_strdup("node 0")));
	t_list	*temp = my_list;
	while (temp)
	{
		printf("%s -> ", (char *)temp ->content);
		temp = temp ->next;
	}
	printf("NULL\n");

	printf("step 3 add a new node to last:\n");
    ft_lstadd_back(&my_list, ft_lstnew(ft_strdup("node 2")));
	temp = my_list;
	while (temp)
	{
		printf("%s -> ", (char *)temp ->content);
		temp = temp ->next;
	}
	printf("NULL\n");

	printf("step 4 apply toupper function to each node:\n");
    ft_lstiter(my_list, ft_str_toupper);
	temp = my_list;
	while (temp)
	{
		printf("%s -> ", (char *)temp ->content);
		temp = temp ->next;
	}
	printf("NULL\n");

    printf("step 5 delete one node: \n");
    t_list  *save = my_list ->next;
    ft_lstdelone(my_list, free);
    my_list = save;
	while (my_list)
	{
		printf("%s -> ", (char *)my_list ->content);
		my_list = my_list ->next;
	}
	printf("NULL\n");

    printf("step 6 delete all the list: \n");
    ft_lstclear(&my_list, free);
    temp = my_list;
	while (temp)
	{
		printf("%s -> ", (char *)temp ->content);
		temp = temp ->next;
	}
	printf("NULL\n");

	return (0);
}
