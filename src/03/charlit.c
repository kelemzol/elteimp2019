// #3 3
#include <stdio.h>

int main () {

  char s1[5] = "alma";
  char s2[] = "alma";
  char s3[4] = "alma";
  char s4[3] = "alma";
  char * s5 = "alma";

  printf("sizeof(%s):%lu\n", s1, sizeof(s1));
  printf("sizeof(%s):%lu\n", s2, sizeof(s2));
  printf("sizeof(%s):%lu\n", s3, sizeof(s3));
  printf("sizeof(%s):%lu\n", s4, sizeof(s4));
  printf("sizeof(%s):%lu\n", s5, sizeof(s5));

  printf("-----\n");

  s1[0] ='q';
  s2[0] ='q';
  s3[0] ='q';
  s4[0] ='q';
  //s5[0] ='q';

  printf("sizeof(%s):%lu\n", s1, sizeof(s1));
  printf("sizeof(%s):%lu\n", s2, sizeof(s2));
  printf("sizeof(%s):%lu\n", s3, sizeof(s3));
  printf("sizeof(%s):%lu\n", s4, sizeof(s4));
  printf("sizeof(%s):%lu\n", s5, sizeof(s5));

}


