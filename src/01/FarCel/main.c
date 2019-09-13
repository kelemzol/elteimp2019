
#include <stdio.h>

int main(int argc, char* argv[]) {

  double tc_c = 5.0/9.0;
  double tf_c = 9.0/5.0;

  double cel = 20;

  double far = tf_c * cel + 32;

  printf("%fC ~ %fF\n", cel, far);

  double cel2 = tc_c * (far - 32);

  printf("%fF ~ %fC\n", far, cel2);

}


