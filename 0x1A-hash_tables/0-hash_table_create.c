#include "hash_tables.h"
/**
 * hash_table_create - Create hash table
 * @size: Size
 * return: Null or hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *h1;

        if (size <= 0)
        {
                return (NULL);
        }
        h1 = malloc(sizeof(hash_table_t));
        if (h1 == NULL)
        {
                return (NULL);
        }
        h1->array = calloc(size, sizeof(hash_node_t *));
        if (h1->array == NULL)
        {
                free(h1);
                return (NULL);
        }
        h1->size = size;
        return (h1);
}
