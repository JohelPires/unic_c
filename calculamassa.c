#include <stdio.h>
#include <stdlib.h>

float calcularMassa(float a, float b) {
  printf("%f", (a + b));
  return a + b;
}

void main(void) {
  float a = 0, b = 0, resultado = 0;

  printf("Digite as massas de A e B: ");
  scanf("%f", &a);
  scanf("%f", &b);

  resultado = calcularMassa(a, b);

  printf("resultado: %f", &resultado);
}