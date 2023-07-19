#include "main.h"
#include <stdlib.h>
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		char lettre;

		for (lettre = 'a' ; lettre <= 'z' ; lettre++)
		{
			_putchar(lettre);
		}
		_putchar('\n');
	}
}
