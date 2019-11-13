#include <stdio.h>

int main() {

  FILE *fin, *fout;
  char buff[64];

  fin = fopen ("filebasic.c","r");
  fout = fopen ("filebasic_out.c","w");

  if (fin!=NULL && fout!=NULL)
  {
    char *input = fgets (buff, 64, fin);
    printf("read '%s'\n", input);
    if (input != NULL) {
      int i = fputs(buff, fout);
      printf("write is%ssuccess\n", i >= 0 ? " " : " not ");
    }
    fclose (fin);
    fclose (fout);
  }
  return 0; 
}

