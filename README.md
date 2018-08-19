# bitio
### Basic io framework for bit by bit manipulation. Modeled after getchar(), getc(), putchar() and putc().
##### Written in C.
##### By David Gold.

### char getbit()
#### Returns the next bit from stdin.

### char getb(FILE *stream)
#### Returns the next bit in a given file as a char. Returns EOF on end of file.

### char putb(bool v, FILE *stream)
#### Places a given bit (1 or 0, true or flase) in given output file. Bits are in minimum size buffer specified by system's CHAR_BIT.

### char putbit(bool v)
#### Places a given bit (1 or 0, true or flase) to stdout. Bits are in minimum size buffer specified by system's CHAR_BIT.
