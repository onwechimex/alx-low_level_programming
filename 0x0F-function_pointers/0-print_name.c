/**
 *print_name - prints a name.
 *@name: a pointer to name.
 *@f: a function pointer.
 *
 *Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
		(*f)(name);
}
