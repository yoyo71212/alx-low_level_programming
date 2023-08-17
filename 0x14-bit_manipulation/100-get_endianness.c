#include "main.h"
/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/**
	 * union check - Checks endianness
	 *
	 * @i: Integer to check endianness
	 * @c: Array for comparison
	 */
	union check
	{
		unsigned int i;
		unsigned char c[sizeof(unsigned int)];
	} check;

	check.i = 1;

	return (check.c[0] == 1);
}
