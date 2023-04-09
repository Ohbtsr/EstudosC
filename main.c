// Verificador de Par ou impar dois dígitos
// By Lindomar Baltasar
// Importando Biblioteca
#include <stdio.h>

void verificaParImpar(int *verificador) { // Criar função e recebe ponteiro
  if (*verificador % 2 ==
      0) { //  Condição do ponteiro divísivel por 2 e resto 0
    printf("%d é um número par.\n", *verificador); // Par
  } else {
    printf("%d é um número ímpar.\n", *verificador); // Se não, é impar
  }
}

int main(void) { // Função Principal do Programa
                 // Declaração de variáveis inteiras.
  int valor = 1;
  int valor_dois = 1;
  printf("Verificador de Numero Impar ou Par\n");
  printf("Digite dois números ou 0 para sair: ");
  // Imprime mensagem na tela para o usuário se situar
  while (valor_dois != 0 && valor != 0) {

    printf("\nPrimeiro número:");
    scanf("%d", &valor);
    if (valor == 0) // Checa valor recebido
      break;        // Sendo 0, break while

    printf("Segundo número:");
    scanf("%d", &valor_dois); // Checa valor_dois recebido
    if (valor == 0)           // Sendo 0, break while
      break;
    getchar(); // Limpa Buffer
    // Chama a função e entrega &valor
    verificaParImpar(&valor);
    verificaParImpar(&valor_dois);
  }
  printf("Programa Finalizado");

  return 0;
}
