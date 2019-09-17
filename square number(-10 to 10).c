#include <stdio.h>
/* Print a list of squares of number from -10 to 10*/
int main() {

  int i;

  printf("    Number     Square\n");
  for (i = -10; i < 11; i++) {
    printf("%10d %10d\n", i, i*i);
  }
  return 0;
}
