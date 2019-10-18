
#include <stdio.h>

int main () {
  int i, p, is_prime = 1;
  scanf("%d", &p);
  for(i = 2; is_prime && i < p/2; i++) {
    if (p % i == 0)
      is_prime = 0;
  }
  printf("%d is%sprime\n", p
    , is_prime ? " " : " not ");
}



