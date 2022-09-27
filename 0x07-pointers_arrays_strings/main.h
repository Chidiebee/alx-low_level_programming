  1 #ifndef MAIN_H
  2 define MAIN_H
  3
  4 /**
  5
  6 * void prototypes()
  7 int prototypes()
  8 */
  9
 10 int _putchar(char);
 11 char *_memset(char *s, char b, unsigned int n);
 12 char *memcpy(char *dest, char *src, unsigned int n);
 13 char *_strchr(char *s, char c);
 14 unsigned int _strspn(char *s, char *accept);
 15 char *_strpbrk(char *s, char *accept);
 16 char *strstr(char *haystack, char *needle);
 17 void print_chessboard(char (*a)[8]);
 18 void print_diagsums(int *a, int size);
 19 void set_string(char **s, char *to);

#endif /*MAIN_H*/
