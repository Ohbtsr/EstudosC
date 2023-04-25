/*
Um(a) metrologista registra as medidas de um aparelho que variam entre -100 e
100. Valores fora desse intervalo indicam um problema na leitura, que deve ser
interrompida at ́e o aparelho ser recali- brado. Crie um programa que registra
essas leituras e imprime a m ́edia dos valores lidos. */

#include <stdio.h>
#include <stdlib.h>

float numero[200]; // Vetor que armazenará as medidas
float soma,media;
int n;             // Número de medidas


void calcularMedia(); // Função para cálculo da média

int main() {
  printf("Quantas medidas deseja armazenar? ");
  scanf("%d", &n);

  if (n < 1 || n > 200) { // Verifica se o número de medidas é válido
    printf("Valor inválido para a quantidade de medidas\n");
    return 0;
  }

  // Loop para inserção das medidas
  int i;
  for (i = 0; i < n; i++) {
    printf("Insira o %dº valor: ", i + 1);
    scanf("%f", &numero[i]);
    if (-100 <= numero[i] &&
        numero[i] <= 100) { // Verifica se a medida é válida
      soma += numero[i];    // Quando válida, é somada.
    } else {
      printf("Número digitado inválido.\n"); // Medida inválida.
      break;                                 // Interrompe novas medidas.
    }
  }
  if (i == n) {      // Verifica se todas as medidas foram inseridas com sucesso
    calcularMedia(); // Chama a função para calcular a média
  }

  return 0;
}

void calcularMedia() {
   if (n >= 0) {
    media = soma / n;
    printf("Média dos valores armazenados: %.2f\n", media);
  }
  else {
    printf("Nenhum valor inserido.\n");
  }
}
