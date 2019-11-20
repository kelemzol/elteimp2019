#include <stdio.h>
#include <stdint.h>

// size_t fread ( void * ptr, size_t size, sizet count, FILE * stream );

int main() {
  FILE *p = fopen("fseek.data","r");
  if(p) {
    fseek(p, 4, SEEK_CUR);
    int32_t i32;
    size_t size = fread(&i32, sizeof(int32_t), 1, p);
    printf("read: %d; size: %zu\n", i32, size);
  }
}

