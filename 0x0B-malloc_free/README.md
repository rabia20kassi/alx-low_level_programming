0- Function that creates an array of chars, and initializes it with a specific char.
Prototype: char *create_array(unsigned int size, char c);

1-Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype: char *_strdup(char *str);

2-Function that concatenates two strings.
Prototype: char *str_concat(char *s1, char *s2);

3-Function that returns a pointer to a 2 dimensional array of integers.
Prototype: int **alloc_grid(int width, int height);

4-Function that frees a 2 dimensional grid previously created by your alloc_grid function.
Prototype: void free_grid(int **grid, int height);
