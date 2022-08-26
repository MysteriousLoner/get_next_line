/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalee <yalee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:10:00 by yalee             #+#    #+#             */
/*   Updated: 2022/08/26 08:09:37 by yalee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

// int main()
// {
//     int fd = open("/Users/yalee/Documents/get_next_line/gnlTester/files/42_with_nl", O_RDONLY);
//     char *result = get_next_line(fd);
//     //result = NULL;
//     printf("\nfirst call: %s", result);
//     char *result2 = get_next_line(fd);
//     printf("\nsecond call: %s", result2);
//     close(fd);
// }

char *get_next_line(int fd)
{
    // char        *return_line;
    // char        *buffer;
    // char        *swpbuffer;
    // int         mem_extender;
    
    // mem_extender = 1;
    // buffer = (char *) malloc(1);
    // return_line = (char *) malloc(1);
    // if (read(fd, buffer, 1) < 1)
    // {
    //     free(buffer);
    //     return(0);
    // }
    // return_line[0] = buffer[0];
    // while(buffer[0] != '\n')
    // {
    //     buffer = (char *) malloc(1);
    //     if (!read(fd, buffer, 1))
    //         break;
    //     mem_extender++;
    //     swpbuffer = (char *) malloc(mem_extender);
    //     ft_strcpy(return_line, swpbuffer);
    //     return_line = (char *) malloc(mem_extender);
    //     ft_strcpy(swpbuffer, return_line);
    //     return_line[mem_extender - 1] = buffer[0];
    // }
    // free(buffer);
    // free(swpbuffer);
    // free(return_line);
    // return(return_line);
    
    static char    *return_line;
    char    *temp_buffer;
    
    temp_buffer = (char *) malloc(1);
    if (read(fd, temp_buffer, 1) < 1 && temp_buffer[0] != '\n')
    {
        free(temp_buffer);
        return(NULL);
    }
    return_line = (char *) malloc(2);
    return_line[0] = temp_buffer[0];
    return_line[1] = '\0';
    //extract_line(fd, return_line, temp_buffer);
    //printf("\nafter func: %s.", return_line);
    //printf("\n %c.", return_line[1]);
    //free(temp_buffer);
    //free(return_line);
    return(extract_line(fd, return_line, temp_buffer));
}
