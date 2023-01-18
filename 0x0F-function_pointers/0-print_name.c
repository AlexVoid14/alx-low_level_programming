/**
 * print_name - prints name
 * @name: pointer to name
 * @f: function to pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
