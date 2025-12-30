#include <stdio.h>

// // without typdef
// struct complex {
//   float re;
//   float im;
// } x, y;

// with typedef
typedef struct {
  float re;
  float im;
} complex;

int main() {

  // // without typdef

  // x.re = 1.25;
  // x.im = 2.50;
  // y = x;


  // printf("x = %.2f + %.2fi\n", x.re, x.im);
  // printf("y = %.2f + %.2fi\n", y.re, y.im);

  // if (x.re == y.re && x.im == y.im) {
  //     printf("x and y are equal\n");
  // } else {
  //     printf("x and y are NOT equal\n");
  // }

  // with typedef

  complex x = {1.25, 2.50};

  complex y = x;

  printf("x = %.2f + %.2fi\n", x.re, x.im);
  printf("y = %.2f + %.2fi\n", y.re, y.im);

  if (x.re == y.re && x.im == y.im) {
      printf("x and y are equal\n");
  } else {
      printf("x and y are NOT equal\n");
  }
  return 0;
}