#include "main.h"
#include <string.h>
/**
 *_strncpy - function that copies a string
 *
 *@dest : first operand, string where to append the copy
 *@src : second operand, string to copy
 *@n : number of bytes to copy from src to dest
 *
 *Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

