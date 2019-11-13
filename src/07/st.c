#include <stdio.h>

struct int_pair {
    int a;
    int b;
};

typedef struct int_pair int_p;

typedef struct {
    int a;
    int b;
} int_p2;

typedef struct {
  char b1[10];
  char b2[10];
} str_p;

typedef struct {
  char *b1;
  char *b2;
} str_p2;

typedef struct {
  str_p s1;
  int_p2 s2;
  struct {
    char c1;
    char c2;
  } s3;
} comp_st;


int main() {
  comp_st s6 = {{"dsf", "dfsd"}, {2, 3}, {'a', 'b'}};
  printf("a:%d, b:%d, b1:%s, b2:%s, c1:%c, c2:%c\n"
           , s6.s2.a, s6.s2.b,
           s6.s1.b1, s6.s1.b2, s6.s3.c1, s6.s3.c2);
  
  struct int_pair s1 = {1, 2};
  printf("a: %d, b: %d\n", s1.a, s1.b);
  int_p s2 = {3,4};
  printf("a: %d, b: %d\n", s2.a, s2.b);
  int_p2 s3 = {5,6};
  printf("a: %d, b: %d\n", s3.a, s3.b);
  int_p2 *p3 = &s3;
  printf("a: %d, b: %d\n", (*p3).a, (*p3).b);
  printf("a: %d, b: %d\n", p3->a, p3->b);
  printf("sizeof: %lu\n", sizeof(s3));
  str_p s4 = {"alma","korte"};
  printf("a: %s, b: %s\n", s4.b1, s4.b2);
  printf("sizeof: %lu\n", sizeof(s4));

  str_p2 s5 = {"alma","korte"};
  printf("a: %s, b: %s\n", s5.b1, s5.b2);
  printf("sizeof: %lu\n", sizeof(s5));

}



