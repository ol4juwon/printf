#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
* struct structprint - structure containing the struct print
* @q: the location and method to tranalte data to characters
* @u: print function for specific data type
* @format: the format of the data
* Return int
*/

typedef struct print
{
char *q;
int (*u)(char *format, va_list);
} print_t;

int _printf(char *format, ...);

#endif