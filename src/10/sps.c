#include <stdio.h>
#include <stdlib.h>

typedef enum {
  stone,
  paper,
  scissors
} sps;

char *sps_strings[] = { "stone", "paper", "scissors" };

sps rand_sps() {
  return rand() % 3;
}

const char *sps_to_string(sps s) {
  return sps_strings[s];
}

int win(sps u, sps m) {
  switch (u) {
    stone:
      if(m == scissors) return 1;
      break;
    paper:
      if(m == stone) return 1;
      break;
    scissors:
      if(m == paper) return 1;
      break;
  }
  return 0;
}

int main() {
  sps user, machine;
  printf("1. stone\n2. paper\n3. scissors\n? ");
  scanf("%d",&user); user--;
  srand(time(0));
  machine = rand_sps();
  printf("user: %s\nmachine: %s\n"
    , sps_to_string(user), sps_to_string(machine));
  if(user != machine) {
    printf("You %s\n", win(user, machine) ? "win" : "failed");
  } else {
    printf("Its same\n");
  }
  int i;
  for(i=0;i<10;i++)
    printf("%d\n", rand()%3);
  return 0;
}

