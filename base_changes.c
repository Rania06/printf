#include "main.h"

/**
 * print_binary - convert a number to binary
 * @list: argument passed to this function
 * Return: length of the number
 */
int print_binary(va_list list)
{
unsigned int num;
int i, len;
char *str;
char *rev_str;

num = va_arg(list, unsigned int);
if (num == 0)
return (_write_char('0'));
if (num < 1)
return (-1);
len = base_len(num, 2);
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (-1);
for (i = 0; num > 0; i++)
{
if (num % 2 == 0)
str[i] = '0';
else
str[i] = '1';
num = num / 2;
}
str[i] = '\0';
rev_str = rev_string(str);
if (rev_str == NULL)
return (-1);
write_base(rev_str);
free(str);
free(rev_str);
return (len);
}

