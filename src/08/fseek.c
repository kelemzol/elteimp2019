#include <stdio.h>

int main() {
  FILE *p = fopen("fseek.data","r");
  if(p) {
    fseek(p, 4, SEEK_CUR);
    char c = fgetc(p);
    printf("read: %c(%d)\n", c, c);
  }
}

