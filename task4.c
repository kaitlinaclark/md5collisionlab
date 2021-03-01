#include <stdio.h>

unsigned char x[200] = {
/* The actual contents of this array are up to you */
};

unsigned char y[200] = {
/* Contents are up to you, but should be the same as the x array */
};

int main() {
  int i;
  for (i=0; i<200; i++){
    if(x[i] != y[i]){ break; }
  }

  if(i == 200){ printf("%s", "benign code"); } /* x = y */
  else{ printf("%s", "WARNING: malicious code"); } /* x != y */

  printf("\n");
}
