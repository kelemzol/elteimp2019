#include <stdio.h>

// int getc(FILE *stream);
// int putc (int character, FILE *stream);
// int getchar(void);
// int putchar(int character);
// int feof(FILE *stream)

int main() {
  char c = 0;
  while (c != '\n') {
    //c = getc(stdin);
    c = getchar();
    //putc(c, stdout);
    putchar(c);
  }

  while (1) {
    c = getc(stdin);
    if (c == EOF || feof(stdin))
      break;
    putc(c, stdout);
  }
}



