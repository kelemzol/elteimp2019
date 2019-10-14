
#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int addTo(int *a, int b) {
  return *a += b;
}

int *addTo2(int *a, int b) {
  *a += b;
  return a;
}

int *add2(int a, int b) {
  a += b;
  return &a;
}

int *add3(int a, int b) {
  int c = a + b;
  return &c;
}

int global_res;
int *gmax(int a, int b) {
  global_res = (a < b) ? b : a;
  return &global_res;
}

int max(int *arr, size_t size) {
  int i, m = 0;
  printf("max(arr, %lu)\n", size);
  if (size > 0) {
    m = arr[0];
    for (i = 2; i < size; i++) {
      if (arr[i] > m)
        m = arr[i];
    }
  }
  return m;
}

int *max2(int *arr, size_t size) {
  int *p = 0, i;
  printf("max2(arr, %lu)\n", size);
  if (size > 0) {
    p = arr;
    for (i = 2; i < size; i++)
      if (arr[i] > *p)
        p = arr+i;
  }
  return p;
}


int factorial(int e) {
  int i, f=1;
  for (i = 2; i <= e; i++)
    f *= i;
  return f;
}

int rec_factorial(int e) {
  if (e <= 1) return 1;
  return e*rec_factorial(e-1);
}


int max3(int a, int b);

int main () {
  int arr1[] = {1, 5, 3, 7, 8, 2};
  int arr2[] = {};

  printf("%d\n", max(arr1, sizeof(arr1)/sizeof(int)));
  printf("%d\n", max(arr2, sizeof(arr2)/sizeof(int)));
  printf("%d\n", *max2(arr1, sizeof(arr1)/sizeof(int)));
//  printf("%d\n", *max2(arr2, sizeof(arr2)/sizeof(int)));

  printf("fact(%d) = %d\n", 0, factorial(0));
  printf("fact(%d) = %d\n", 1, factorial(1));
  printf("fact(%d) = %d\n", 2, factorial(2));
  printf("fact(%d) = %d\n", 3, factorial(3));
  printf("fact(%d) = %d\n", 4, factorial(4));

  printf("rec fact(%d) = %d\n", 0, rec_factorial(0));
  printf("rec fact(%d) = %d\n", 1, rec_factorial(1));
  printf("rec fact(%d) = %d\n", 2, rec_factorial(2));
  printf("rec fact(%d) = %d\n", 3, rec_factorial(3));
  printf("rec fact(%d) = %d\n", 4, rec_factorial(4));


}

int max3(int a, int b) {
  return (a < b) ? b : a;
}




