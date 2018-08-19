#ifndef bitio
#define bitio
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
char getbit();
char getb(FILE *stream);
bool putbit(bool v);
bool putb(bool v, FILE *stream);
int toDec(char *buffer);
#endif
