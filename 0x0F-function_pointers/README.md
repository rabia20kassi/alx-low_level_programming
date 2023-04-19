0-Function that prints a name.
 Prototype: void print_name(char *name, void (*f)(char *));


1-Function that executes a function given as a parameter on each element of an array.
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));


2-Function that searches for an integer.
Prototype: int int_index(int *array, int size, int (*cmp)(int));


3- program that performs simple operations.


4-program that prints the opcodes of its own main function.
Usage: ./main number_of_bytes
