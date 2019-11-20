#include <stdio.h>

int main() {
  FILE *p = fopen("br.txt","r");
  if(p) {
    char c;
    int b = 0;
    int noerror = 1;
    while((c=fgetc(p)) != EOF && noerror) {
      if(c == '(') b++;
      if(c == ')') b--;
      if(b < 0) noerror = 0;
    }
    printf("a zarojelezes %s\n", b == 0 ? "helyes" : "helytelen");

    fclose(p);
  }
}


