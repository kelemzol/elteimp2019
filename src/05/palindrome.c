#include <stdio.h>
#include <string.h>
// size_t strlen ( const char * str );
int main() {
  char buff[32];
  int i, is_palindrome = 1;

  scanf("%s", buff);
  size_t len = strlen(buff);

  for (i = 0; is_palindrome && i < len / 2; i++)
    if (buff[i] != buff[len-i-1])
      is_palindrome = 0;

  printf("'%s' is%spalindrome\n", buff
    , is_palindrome ? " " : " not ");
}

