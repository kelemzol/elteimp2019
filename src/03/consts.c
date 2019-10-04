// #3 6
#include <stdio.h>

int main() {

  int i = 0;
  printf("i: %d\n", i);
  i = 1;
  printf("i: %d\n", i);

  const int j = 0;
  printf("j: %d\n", j);
  // j = 1; // error: assignment of read-only variable ‘j’
  printf("j: %d\n", j);

  const int j1 = 0, j2 = 1;
  // j2 = 3; // error: assignment of read-only variable ‘j2’

  int const j3 = 0, j4 = 0;
  // j4 = 1; // error: assignment of read-only variable ‘j4’

  long int l1 = 1, l2 = 2;
  printf("longs: %ld size: %lu, %ld size: %lu\n", l1, sizeof(l1), l2, sizeof(l2));

  int const k = 0;
  printf("k: %d\n", k);
  // k = 1; // error: assignment of read-only variable ‘k’

  const int a[2] = {1, 2};
  printf("a[0]:%d, a[1]:%d\n", a[0], a[1]);
  // a[0] = 0; // error: assignment of read-only location ‘a[0]’
  // a[1] = 0; // error: assignment of read-only location ‘a[1]’
  // a[2] = 0; // error: assignment of read-only location ‘a[2]’
  // 1[a] = 0; // error: assignment of read-only location ‘a[1]’
  *(int *)a = 0; // ??

  const int *p1 = &i; // const pointed value
  printf("p1:%lu, *p1:%d\n", (unsigned long)p1, *p1);
  p1 = 0;
  // *p1 = 0; // error: assignment of read-only location ‘*p1’

  int const *p2 = &i; // const pointed value
  printf("p2:%lu, *p2:%d\n", (unsigned long)p2, *p2);
  p2 = 0;
  // *p2 = 0; // error: assignment of read-only location ‘*p2’

  int * const p3 = &i; // const pointer value
  printf("p3:%lu, *p3:%d\n", (unsigned long)p3, *p3);
  // p3 = 0; // error: assignment of read-only variable ‘p3’
  *p3 = 0;


}


