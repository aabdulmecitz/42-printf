/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:19:54 by marvin            #+#    #+#             */
/*   Updated: 2024/08/03 13:19:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdarg.h"
#include "stdio.h"

void writeInt (int num, ...){
    
    va_list args;
    va_start (num, args);

    int i;
    i = 0;
    while (i < num)
    {
        int a;

        a = va_arg(args, int);
        printf("%d \n", a);
        i++;
    }
    va_end(args);
}

int main(int argc, char const *argv[])
{
    writeInt(5, 10, 20, 30, 40, 50);
    return 0;
}
