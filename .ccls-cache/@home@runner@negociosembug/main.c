
/*
Project by Lindomar Baltasar 
Um circuito possui um numero n de resistores. Cada resistor ora é conectado
em paralelo (P) ora em série (S). Crie um programa que lê o valor da
resistência de cada resistor, sua configuração (P ouS) e determina a
resistência final do circuito.
usuario determina numero de resistores e o valor da resistencia
usuario irá definir
a cada resistor adicionado o req final muda
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float r, reqFinal = 0, reqSerie, reqParalelo;
  int n = 0; // Inicializa a variável em 0
  char sp;
  printf("Insira o valor do número total de resistores: \n");
  scanf("%d", &n);
  int i;
  printf("Insira o valor do primeiro resistor ");
  scanf("%f", &r);
  reqFinal += r;
  n = n - 1;
  for (i = 0; i < n; i++) { // Repete enquanto for verdadeiro
    printf("Insira o valor do resistor\n ");
    scanf(" %f", &r);
    printf("Resistor série ou paralelo?: \n");
    scanf(" %c", &sp);
    printf(" %c", sp);
    if (sp == 's') {
      reqFinal += r;
      printf("Resistência em série: %.2f \n", reqFinal);
    } else if (sp == 'p') {
      reqFinal = ((reqFinal * r) / (reqFinal + r));
      printf("Resistência em paralelo: %.2f \n", reqFinal);
    }
  }
  if (i == n) {
    printf("Resistência final: %.2f \n", reqFinal);
  }
  return 0;
}
