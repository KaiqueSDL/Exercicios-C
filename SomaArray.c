#include <stdio.h>

int main(void) {

  /*Soma de Elementos em um Array: Crie um programa que solicita ao usuário inserir elementos em um array e calcule a soma desses elementos. */

  int tamanho = 0;

  printf("Quantos itens voce deseja incluir na lista de numeros? ");
  scanf("%d" , &tamanho);

  int lista[tamanho];
  int soma = 0;

  for(int i = 0; i < tamanho; i++){
    printf("Digite o valor do item %d: " , i);
    scanf("%d" , &lista[i]);
    soma += lista[i];
  }

  printf("Soma total do seus elementos == %d" , soma);
  return 0;

}

