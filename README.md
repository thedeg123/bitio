# bitio
### Basic io framework for bit by bit manipulation. Modeled after getchar(), getc(), putchar() and putc().
##### Written in C.
##### By David Gold.

### Usage
##### Simply #include "bitio.h" (assuming files in directory/path)

#### char getbit()
#####    Returns the next bit from stdin.

#### char getb(FILE *stream)
#####    Returns the next bit in a given file as a char. Returns EOF on end of file.

#### bool putb(bool v, FILE *stream)
#####    Places a given bit (1 or 0, true or false) in given output file. Bits are in minimum size buffer specified by system's CHAR_BIT.

#### bool putbit(bool v)
#####    Places a given bit (1 or 0, true or false) to stdout. Bits are in minimum size buffer specified by system's CHAR_BIT.
