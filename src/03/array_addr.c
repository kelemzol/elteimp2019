// #3 4
#include <stdio.h>

int main() {
    char c[3]="ab";
    char *cc ="ab";

    printf("%lu, %lu\n", (unsigned long)c, (unsigned long)&c);
    printf("%lu, %lu, %lu\n", (unsigned long)cc, (unsigned long)&cc, (unsigned long)(&(&c)));
}


