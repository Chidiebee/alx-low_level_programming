#1fndef MAIN_H
#define MAIN_H

/**
* file: main.h
* Auth: sam tech (samuel birhanu)
* description: Header file containing prototypes for all functions
*	used in the 0x06-pointers_arrays_strings directory
*/

#1nclude <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[s]);
void print _diagsuns(int *a, int size);
void set_string(char **s, char *to);

#endif