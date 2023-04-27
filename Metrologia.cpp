/* br Lindomar Baltasar
Um(a) metrologista registra as medidas de um aparelho que variam entre -100 e
100. Valores fora desse intervalo indicam um problema na leitura, que deve ser
interrompida at ́e o aparelho ser recali- brado. Crie um programa que registra
essas leituras e imprime a m ́edia dos valores lidos. */

#include <stdio.h>
#include <stdlib.h>
void calcularMedia();

float soma, media, medida;
int n; // Número de medidas

int main() {
  printf("Quantas medidas deseja armazenar? ");
  scanf("%d", &n);

  // Loop para inserção das medidas
  int i;
  for (i = 0; i < n; i++) {
    printf("Insira o %dº valor: ", i + 1);
    scanf("%f", &medida);
    if (-100 <= medida && medida <= 100) { // Verifica se a medida é válida
      soma += medida;
    } else {
      printf("Número digitado inválido.\n"); // Medida inválida.
      break;                                 // Interrompe novas medidas.
    }
  }
calcularMedia();
  return 0;
}

void calcularMedia() {
  if (n >= 0) {
    media = soma / n;
    printf("Média dos valores armazenados: %.2f\n", media);
  } else {
    printf("Nenhum valor inserido.\n");
  }
}
