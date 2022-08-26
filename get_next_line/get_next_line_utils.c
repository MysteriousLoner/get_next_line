/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalee <yalee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:10:03 by yalee             #+#    #+#             */
/*   Updated: 2022/08/24 18:42:51 by yalee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


void ft_strcpy(char *src, char *dst)
{
    int i;
    
    i = 0;
    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

char *extract_line(int fd, char *return_line, char *temp_buffer)
{
    int     mem_extender;
    char    *swap_buffer;
    
    mem_extender = 1;
    temp_buffer = (char *) malloc(2);
    //printf("\nbefore loop: %s.", return_line);
    while(read(fd, temp_buffer, 1) > 0 && temp_buffer[0] != '\n')
    {
        // mem_extender++;
        // swap_buffer = (char *) malloc(mem_extender - 1);
        // if (!read(fd, temp_buffer, 1))
        // {
        //     free(temp_buffer);
        //     free(swap_buffer);
        //     free(return_line);
        //     return(return_line);
        // }
        //printf("%s\n", return_line);
        mem_extender++;
        swap_buffer = (char *) malloc(mem_extender + 1);
        ft_strcpy(return_line, swap_buffer);
        return_line = (char *) malloc(mem_extender + 1);
        ft_strcpy(swap_buffer, return_line);
        return_line[mem_extender - 1] = temp_buffer[0];
        temp_buffer = (char *) malloc(2);
        //printf("\n%s.", return_line);
        //free(swap_buffer);
    }
    //printf("\n%s", return_line);
    free(temp_buffer);
    free(swap_buffer);
    free(return_line);
    //return_line[0] = '3';
    //printf("\nbefore void quit: %s.", return_line);
    //free(return_line);
    return(return_line);
}
