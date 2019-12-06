
#include <stdio.h>

typedef union ic_u {
  int i;
  char c;
  union { 
    int o;
    char *p;
  } u;
} ic;

int main () {
  printf("sizeof(ic) = %lu\n", sizeof(ic));
  ic u;
  u.i = 1;
  printf("u.i:%d u.c:%c\n", u.i, u.c);
  u.c = 'A';
  printf("u.i:%d u.c:%c\n", u.i, u.c);
  //printf("u.u.p:%s\n", u.u.p);
  printf("u.u.o:%d\n", u.u.o);
}


