
#include <stdio.h>
#include "max.h"


int main() {
  int i = 0;
  printf("max(%d, %d) = %d\n", 2, 4, max(2, 4));
  printf("max(%d, %d) = %d\n", i++, ++i, max(i, i));
}

