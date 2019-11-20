#include <stdio.h>

int main() {
  FILE *p = fopen("f.txt", "r");
  if(p) {

    char c;
    int i = 0;
    while((c = fgetc(p)) != EOF && i >= 0) {
      if(c=='(') i++;
      if(c==')') i--;
    }
    printf("a zarojelezes: %s\n", i == 0 ? "helyes" : "helytelen");

    fclose(p);
  }

}



