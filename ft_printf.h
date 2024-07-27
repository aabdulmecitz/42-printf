#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
// ... dedigimiz sey aslinda bu fonksiyonun birden fazla parametre alabilecegini soyluyor
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int n);

#endif