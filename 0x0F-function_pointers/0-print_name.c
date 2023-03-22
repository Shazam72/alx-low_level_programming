/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function pointer to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
