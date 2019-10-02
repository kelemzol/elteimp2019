
#include <stdio.h>


int main () {

  // int, float, double, char, char*, char[12], double[12]

  printf("int:    %lu\n", sizeof(int));
  printf("float:  %lu\n", sizeof(float));
  printf("double: %lu\n", sizeof(double));
  printf("char:   %lu\n", sizeof(char));
  printf("char*:  %lu\n", sizeof(char *));
  printf("char[12]:  %lu\n", sizeof(char[12]));
  printf("double[12]:  %lu\n", sizeof(double[12]));


}


