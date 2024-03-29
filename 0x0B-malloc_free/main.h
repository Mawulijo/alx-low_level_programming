#ifndef MAIN_H
#define MAIN_H

/* declaration of function to create and initialize character array (0)*/
char *create_array(unsigned int size, char c);

/*declaration of function to return new pointer containing copy of string (1)*/
char *_strdup(char *str);

/*decalration of function for new pointer to concatenated copy of strings (2)*/
char *str_concat(char *s1, char *s2);

/* declaration of subfunction to find length of string */
int _strlen(char *s);

/* declaration of function to create and initialize 2-D array (3)*/
int **alloc_grid(int width, int height);

/* declaration of function to free memory allocated to 2-D array by malloc (4)*/
void free_grid(int **grid, int height);

/* declaration of function to concatenate all arguments to program (5)*/
char *argstostr(int ac, char **av);

/*declaration of function to split string into individual words (6)*/
char **strtow(char *str);

#endif
