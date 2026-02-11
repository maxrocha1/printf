#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	print_char(int c);
int	print_string(char *s);
int	print_pointer(void *ptr);
int	print_number(int n);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned int n, char format);
int	print_percent(void);

#endif
