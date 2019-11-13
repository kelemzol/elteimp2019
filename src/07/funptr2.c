#include <stdio.h>

int max(int a, int b) {
  return a < b ? b : a;
}

int min(int a, int b) {
  return a < b ? a : b;
}

int add2(int i) {
  return i+2;
}
int mul2(int i) {
  return i*2;
}

void map(int *arr, size_t s, int (*mf)(int)) {
  int i;
  for(i = 0; i<s; i++) {
    arr[i] = mf(arr[i]);
  }
}

int sum(int a, int b) {
    return a+b;
}

int foldr ( int (*sf)(int, int), int *arr, size_t s, int n) {
  int i;
  int acc = n;
  for(i=0; i<s; i++) {
    acc = sf(acc, arr[i]);
  }
  return acc;
}




int maximum(int *arr, size_t s, int (*mf)(int, int)) {
  int m = arr[0];
  int i;
  for(i = 1; i<s; i++) {
    //m = (*mf)(m, arr[i]);
    m = mf(m, arr[i]);
  }
  return m;
}


int main () {
  int arr[] = {1,7,5,3};
  size_t s = sizeof(arr)/sizeof(int);
//  int m = maximum(arr, s, min);
//  printf("max: %d\n", m);
  map(arr, s, add2);
  map(arr, s, mul2);
  int i;
  for(i = 0; i<s; i++) {
    printf("arr[%d]:%d\n", i, arr[i]);
  }
  printf("sum: %d\n", foldr(sum, arr, s, 0));

  (*((void(*)(void))0))();


}



