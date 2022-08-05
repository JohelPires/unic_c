#include <stdio.h>
#include <stdlib.h>

int main() {
  int numOfRows, i, j;

  printf("Informe o número de colunas: ");
  scanf("%d", &numOfRows);

  for (i = 1; i <= numOfRows; i++) {
    for (j = 1; j <= numOfRows * 2 - 1; j++) {
      if (j >= numOfRows - (i - 1) && j <= numOfRows + (i - 1)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}