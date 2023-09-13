/**
 * print_name - Entry point
 * @name: string
 * @f: function pointer
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
