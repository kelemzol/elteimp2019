#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// char * strtok ( char * str, const char * delimiters );
// int atoi (const char * str);


int main() {
  char buff[] = "1, 7, 4, 8, 2, 6";
  char *p = strtok (buff, ", ");
  int sum = 0, i;
  while (p) {
    i = atoi (p);
    printf("'%s', %d\n", p, i);
    sum += i;
    p = strtok(NULL, ", ");
  }
  printf("sum: %d\n", sum);
}



