#include <stdio.h>

struct int_pair_s {
    int a;
    int b;
};

typedef struct int_pair_s int_pair;

typedef struct {
    char* str1;
    char* str2;
} string_pair;

typedef struct {
    char str1[10];
    char str2[10];
} string_pair2;

typedef struct {
  str_p s1;
  int_p2 s2;
  struct {
    char c1;
    char c2;
  } s3;
} comp_st;

int main () {
  struct int_pair_s s1 = {1, 2};
  printf("%d, %d, s:%lu\n", s1.a, s1.b, sizeof(s1));

  struct int_pair_s *p1 = &s1;
  printf("%d, %d\n", (*p1).a, (*p1).b);
  printf("%d, %d\n", p1->a, p1->b);

  int_pair s2 = {0, 3};

  string_pair s3 = {"alma", "korte"};
  printf("%s, %s, %lu\n", s3.str1, s3.str2, sizeof(s3));
  s3.str1 = "szilva";
  printf("%s, %s, %lu\n", s3.str1, s3.str2, sizeof(s3));

  string_pair2 s4 = {"kutya", "cica"};
  printf("%s, %s, %lu\n", s4.str1, s4.str2, sizeof(s4));
  // s4.str1 = "lo";
}



