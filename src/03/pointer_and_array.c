// #3 5
#include <stdio.h>

int main() {

  // pointer to an array
  int (* ptr1)[5] = 0; 

  // array of pointers
  int *ptr2[5];

  // ? pointer to an array of pointers
  int *(*ptr3[5]);

  // ? array of pointer to an array
  int ((*ptr4)[5])[5];

  /*

    <expr> = <expr> <array>              -- array
    <expr> = <pointer> <expr>            -- pointer
    <expr> = <pointer> <expr> <array>    -- array of pointer
    <expr> = ( <expr> )                  -- expr

  */

  int a[12];
  int * ap = a;
  // int a2 = ap; // warning: initialization makes integer from pointer without a cast

  // a[2] = (*(a+2))
  // n[m] = (*(n+m))
  // ?? n + m == m + n
  // m[n] = (*(m+n))
  // 2[a] = (*(2+a))

}




