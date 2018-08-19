#ifndef bitio
#define bitio
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
char getbit();
char getb(FILE *f);
bool putbit(bool v);
bool putb(FILE *f, bool v);
int toDec(char *buffer);
#endif
