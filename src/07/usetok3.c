#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// char * strtok ( char * str, const char * delimiters );


int main() {
  char buff[] = "j jkjk jkjk jk";
  char *p = strtok (buff, " ");
  int count = 0;
  while (p) {
    count++;
    p = strtok(NULL, ", ");
  }
  printf("count: %d\n", count);
}



