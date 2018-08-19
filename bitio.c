#include "bitio.h"
//David Gold

//Shortcut to stdio. Like getchar()
char getbit(){
  return getb(stdin);
}
//Returns the next bit in file as a Char. returns EOF at file end
char getb(FILE * f)
{
  static char c;
  static int pos = 0;
  if(pos >0 && c!= EOF){
    pos--;
    return ((c >> pos) &1)? '1':'0';
  }
  else{
    pos = CHAR_BIT;
    c = getc(f);
    return (c!=EOF)? getb(f):EOF;
  }
}
//Shortcut to stdio. Like putchar()
bool putbit(bool v){
  return putb(stdout, v);
}
//places next bit in file. Buffer is size of system char.
bool putb(FILE *f, bool v){
  static char buffer[CHAR_BIT] = {'0'};
  static int count = 0;
  buffer[count] = (v)? '1':'0';
  count++;
  if(!(count%CHAR_BIT)){
    fprintf(f, "%c", (char) toDec(buffer));
    memset(buffer, '0', CHAR_BIT*sizeof(char));
    count = 0;
  }
return true;
}
//Returns the int value of a char representation of a binary number
int toDec(char *buffer){
  int total=0;
  for(int i=CHAR_BIT-1;i>=0;i--){
    total+=(buffer[i]-'0')*pow(2, CHAR_BIT-1-i);
  }
  return total;
}
