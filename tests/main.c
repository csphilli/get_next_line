/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:02:51 by cphillip          #+#    #+#             */
/*   Updated: 2020/01/03 13:51:35 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
    //char    fd_array[FD_SIZE];
    char    fd1, fd2, fd3, fd4, fd5;
    char    *line;
    int     run;
    //int     i;
    
    if (ac <= 1)
    {
        printf("no file or input specified. Ending program.\n");
        return (-1);
    }

    fd1 = open(av[1], O_RDONLY);
    fd2 = open(av[2], O_RDONLY);
    fd3 = open(av[3], O_RDONLY);
    fd4 = open(av[4], O_RDONLY);
    fd5 = open(av[5], O_RDONLY);

    while ((run = get_next_line(fd1, &line)) > 0)
    {
        ft_putstr(line);
        ft_putchar('\n');
        free(line);
    }

    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd3, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd3, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd3, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd3, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd4, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd2, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd5, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd5, &line);
    printf("%s\n", line);
    free(line);
    get_next_line(fd5, &line);
    printf("%s\n\n", line);
    free(line);
    printf("Test mem leak now or ctrl-c to quit\n");
    while (1)
    {
    }
}
