
#include <stdio.h>

int main(int argc, char* argv[]) {

  int i = 1;
  int j = 1;

  for (; i <= 10; i++) {
    for (j = 0; j <= 10; j++) {
        printf("%d * %d = %d\n", i, j, i * j);
    }
  }

}

