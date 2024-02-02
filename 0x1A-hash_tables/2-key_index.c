#include "hash_tables.h"

/**
 * key_index - Get index at which key/value
 *      pair should be stored in array of hash table.
 * @key: Key to get the index of.
 * @size: Size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
