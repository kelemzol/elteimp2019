
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char buff[] = "aa.,bb,.cc";
  char *p = strtok (buff, ", ");
  while (p) {
    printf("'%s'\n", p);
    p = strtok(NULL, ". ");
  }
}

