
#include <stdio.h>

int main() {

  char name[30]; // name swap, size swap, overflow?
  char name2[2];

  scanf("%s", name);

  printf("'%s'\n", name);

  


  scanf("%s", name2);

  printf("'%s'\n", name2);


  printf("name:   %u\nname2:  %u\nname2+1:%u\nname2+2:%u\nname2+3:%u\nname2+4:%u\n", name, name2, name2+1, name2+2, name2+3, name2+4);


  char name3[3];

  scanf("%3s\n", name3);
  printf("'%3s'\n", name3);


} 


