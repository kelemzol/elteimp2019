// #3 1
#include <stdio.h>

int main() {

  // http://www.pictureicon.com/images/all-asci-codes-topic-unimasr-com.png

  char c = 0;

  for (c = 0; c <= 32; c++) {
    printf("%3d.  ,  %3d. %c,  %3d. %c,  %3d. %c\n", c, c+32, c+32, c+32*2, c+32*2, c+32*3, c+32*3);
  }

  char buff[32];
  scanf("%s",buff);
  int i;
  for(i = 0; buff[i] != 0; i++)
    if(buff[i] > 90)
      buff[i] = buff[i] - 32;
    else
      buff[i] = buff[i] + 32;
  printf("%s\n", buff);
}


