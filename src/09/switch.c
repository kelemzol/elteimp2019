#include <stdio.h>

int main() {

  char c = getchar();
  int cond = 1;
  while(cond) 
    switch(c) {
      case '\n':
        cond = 0;
        break;
      default:
        c = getchar();
    }

}



