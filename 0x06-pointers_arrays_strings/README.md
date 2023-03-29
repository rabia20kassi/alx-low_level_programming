0- function that concatenates two strings.
Prototype: char *_strcat(char *dest, char *src);

1- function that concatenates two strings.
Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest

2- function that copies a string.
Prototype: char *_strncpy(char *dest, char *src, int n);

3- function that compares two strings.
Prototype: int _strcmp(char *s1, char *s2);

4- function that reverses the content of an array of integers.
Prototype: void reverse_array(int *a, int n);

5- function that changes all lowercase letters of a string to uppercase.
Prototype: char *string_toupper(char *);

6- function that capitalizes all words of a string.
Prototype: char *cap_string(char *);

7- function that encodes a string into 1337.
Prototype: char *leet(char *);
