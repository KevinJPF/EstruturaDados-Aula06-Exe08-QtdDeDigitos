#include <stdio.h>

int binario(int n) {
  if (n < 2) {
    printf("%d", n);
    return 1;
  } else {
    int soma = binario(n / 2) + 1;
    printf("%d", n % 2);
    return soma;
  }
}

int main(void) {
  int n;
  printf("Num? ");
  scanf("%d", &n);
  printf("\nA quantidade de digitos e de: %d", binario(n));

  return 0;
}