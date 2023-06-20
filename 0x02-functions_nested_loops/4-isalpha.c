#include "main.h"
/**
 *_isalpha - print if input are letter
 *@c: the character in code ASCII
 *Return: 1 if c is character and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
