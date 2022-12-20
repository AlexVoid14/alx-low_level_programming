#include "mai.h"
/**
 * swap_int -function that swaps the values of the intergers.
 * @a: first entry
 * @b: second entry
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
