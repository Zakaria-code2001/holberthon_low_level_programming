#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If the value is found, the index of the value in the array.
 *         If the value is not found or the array is NULL, returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
    int i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
        if (value == array[i])
            return (i);
    }
    return (-1);
}
