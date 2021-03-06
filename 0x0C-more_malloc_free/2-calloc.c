#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates mem for an array and sets it to zero
 * @nmemb: elments
 * @size: bytes 
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for(i = 0; i < nmemb * size; i++)
		arr = 0;
	return (arr);
}
