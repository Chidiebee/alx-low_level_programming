include "main.h"

/**
_ * _memcpy -> Memory copy
_ * @dest: the destination memory
_ * @src: source memory
_ * @n: number of bytes to be copied
_ * Return: string copied from source
_ */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
_		dest[a] = src[a];

_	return (dest);
}

