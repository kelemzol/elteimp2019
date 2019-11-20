/*
int fseek ( FILE * stream, long int offset, int origin );
 origin: SEEK_SET - Beginning of file
         SEEK_CUR - Current position of the file pointer
         SEEK_END - End of file
*/
#include <stdio.h>
#include <stdint.h>
#include <errno.h>
#include <string.h>

int main() {
  FILE *p = fopen("fdf.txt", "r");
  if(p) {
    char c[5] = {0};
    int32_t i;
    fseek(p, 4 ,SEEK_SET);
    fread(&i, sizeof(int32_t), 1, p);
    printf("%d\n", i);
    fclose(p);
  }
  if(p == NULL) {
    printf("a hiba: %s; %s:%d-%s()\n", strerror(errno)
                      , __FILE__, __LINE__, __func__);
    perror("fopen()");
  }


}
