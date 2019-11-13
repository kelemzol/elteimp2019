#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
  return a < b ? b : a;
}

int maximum(int *arr, size_t s, int (*max_fun)(int, int)) {
  int i;
  int m = arr[0];
  for (i = 1; i < s; i++)
    // m < arr[i] ? arr[i] : m;
    // m = (*max_fun)(m, arr[i]);
    m = max_fun(m, arr[i]);
  return m;
}

void to_string(int i, char *p) {
//  char *itoa ( int value, char * str, int base );
//  itoa(i, p, 10);
  sprintf(p,"%d",i);
}

void to_strings(int *arr, size_t s, char **res, void (*to_s)(int, char*)) {
  int i;
  for(i = 0; i < s; i++)
    to_s(arr[i], res[i]);
}

int main() {
  int arr[] = {1, 5, 7, 4};
  int s = sizeof(arr) / sizeof(int);
  //printf("maximum: %d\n", maximum(arr, s, &max));
  printf("maximum: %d\n", maximum(arr, s, max));
  // ((void (*)())0)();

  // char buff[10][10]; != char *buff[10]
  char buff1[10], buff2[10], buff3[10], buff4[10];
  char *buff[] = {buff1, buff2, buff3, buff4};
  
  to_strings(arr, s, buff, to_string);
  int i;
  for (i = 0; i < 4; i++)
    printf("'%s'\n", buff[i]);
}

