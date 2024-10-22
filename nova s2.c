#include <stdio.h>

void print_stars1(int k) {
  for (int i=0; i<k; i++) {
    for (int l=0; l<4; l++) {
      printf(" ");
    }
    for (int p=0; p<i+1; p++) {
      printf("*");
    }
    printf("\n");
  }
}

int main(void) {
  int k;
  printf("숫자 하나를 입력하세요:");
  scanf("%d", &k);
  print_stars1(k);
}