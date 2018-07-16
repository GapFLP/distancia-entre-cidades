#include <stdio.h>

/*

Cada posição da matriz "plano" (simbolizando um plano de coordenadas geográficas)
será definido com uma área fixa correspondente à 1 (um) quilometro quadrado.
Quando uma posição da matriz for igual a 'f' (falso), significa que a área
correspondente está vazia, ou seja, não há nenhuma cidade naquela posição.
Quando uma posição da matriz for definida com uma letra diferente de 'f', aquela
área será considerada como pertencente à cidade que seu caractere representa.
Exemplo:

plano[5][13] = 'c'

A posição (6, 14) no plano pertence à cidade 'c'. Pois soma-se 1 nos valores
correspondentes às linhas e às colunas, isso deve-se ao fato da linguagem c
usar 0 como posição inicial para suas colunas e linhas (e em nosso plano
geográfico, a posição inicial é 1).

*/

int main () {
  int i, j;

  /* Matriz para definir a posição de cada cidade */
  char plano[20][21];

  /* Preenche toda a matriz com f (nenhuma cidade) */
  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      plano[i][j] = 'f';
    }
    plano[i][20] = '\0'; // para indicar o fim do vetor
  }

  /* Insere cidades na matriz */
  plano[18][3] = 'a';
  plano[12][19] = 'b';
  plano[10][10] = 'c';
  plano[1][18] = 'd';

  /* Printa o gráfico com as cidades e suas coordenadas */
  printf("\nGeográfico\n\n");
  printf("    "); // espaço em branco antes da linha que enumera as colunas
  for (j = 0; j < 20; j++) { // printa a linha que enumera as colunas
    printf(" %2d|", j + 1);
  }
  printf("\n");

  for (i = 0; i < 20; i++) { // printa o plano com as posições das cidades
    printf(" %2d|", i + 1); // printa a coluna que enumera as linhas
    for (j = 0; j < 20; j++) {
      if (plano[i][j] == 'f') printf("    "); // printa os espaços vazios
      else printf("  %c|", plano[i][j]); // printa as cidades em suas posições
    }
    printf("\n");
  }

  printf("\n\n");
  return 0;
}
