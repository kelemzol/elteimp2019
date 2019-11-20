
#include <stdio.h>

#define FOREACH(i, arr) for(i = 0; \
 i < sizeof(arr);\
 i++)

int main() {
  char buff[]={2,6,8,4,3,6};
  int i;
  for(i = 0; i< sizeof(buff); i++) {
   printf("%d:%d\n", i, buff[i]);
  }

  FOREACH(i, buff) {
   printf("%d:%d\n", i, buff[i]);
  }
  
}



