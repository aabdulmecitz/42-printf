/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:15:22 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/19 01:19:55 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // Karşılaştırma için normal printf
#include "ft_printf.h"  // ft_printf'in header dosyası

int main(void)
{
    int ret_ft, ret_orig;
    
    // Test case 1: Normal string
    ret_ft = ft_printf("ft_printf: Hello, World!\n");
    ret_orig = printf("   printf: Hello, World!\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test case 2: Integer
    int num = 42;
    ret_ft = ft_printf("ft_printf: Integer: %d\n", num);
    ret_orig = printf("   printf: Integer: %d\n", num);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test case 3: String
    char *str = "Common Core";
    ret_ft = ft_printf("ft_printf: String: %s\n", str);
    ret_orig = printf("   printf: String: %s\n", str);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test case 4: Character
    char ch = 'A';
    ret_ft = ft_printf("ft_printf: Character: %c\n", ch);
    ret_orig = printf("   printf: Character: %c\n", ch);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test case 5: Hexadecimal
    int hex = 255;
    ret_ft = ft_printf("ft_printf: Hexadecimal: %x\n", hex);
    ret_orig = printf("   printf: Hexadecimal: %x\n", hex);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    return 0;
}
