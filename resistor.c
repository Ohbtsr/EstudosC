
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

// Escopo Basico do Sketch
int main() {
  // Inicializacao de variáveis
  float r, reqFinal = 0;
  int n = 0, i;
  char sp;
  printf("Insira o valor do número total de resistores: \n");
  scanf("%d", &n); // Valor Max

  printf("Insira o valor do primeiro resistor ");
  scanf("%f", &r);
  reqFinal += r; // Armazena
  // Loop Limitado
  for (i = 1; i < n; i++) { // Repete enquanto '< n'
    printf("Insira o valor do %d º resistor: ", i + 1);
    scanf(" %f\n", &r);
    printf("O resistor %dº está em série ou paralelo?: ", i + 1);
    scanf(" %c\n", &sp);
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
