
#include <stdio.h>
#include "max.h"

int maximum (int *a, size_t s) {
  int i;
  int m = a[0];
  for (i = 1; i < s; i++)
    m = max (m, a[i]);
  return m;
}

