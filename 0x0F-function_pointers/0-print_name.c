#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name
* @name: string to add
* @f: pointer to function
*
* description: This function takes a pointer to
* a name and a function pointer.
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
