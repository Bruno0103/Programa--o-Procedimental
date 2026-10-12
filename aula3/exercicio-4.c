/*
  ⠀⠀⠀⠀⠀⢀⣴⣶⣶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣼⡟⠁⠈⠙⠻⢿⣿⣄⠀⢀⠀⠀⠀    ⠀⠀⢀⣴⣾⡿⣿⣦⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢠⣿⡇⣠⣴⣶⠶⠿⠿⠟⠿⠛⠿⠿⠿⢿⣶⣶⣿⡋    ⠘⣿⣇⠀⠀⠀
⠀⠀⠀⠀⠀⢸⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⢿⣶⣄    ⣿⡿⠀⠀⠀
⠀⠀⠀⠀⢠⣼⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣷  ⣴⡿⠀⠀⠀I Love Cats
⠀⠀⠀⠀⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣇⠀⠀⠀
⠀⠀⠀⣸⣿⠁⠀⠀⠀⣴⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣶⠀⠀⠀⠀⢻⣿⠀⠀⠀
⢠⣶⡷⣿⣿⢿⢿⡦⠀⠀⠀⠀⢠⡄⠀⠛⠃⠀⣠⡀⠀⠀  ⢀⣀⣀⣼⣿⣤⣀⡀
⠀⣠⣤⣽⣿⣶⣶⣶⣦⠀⠀⠀⠘⢿⣴⠿⠿⣶⠿⠁    ⠀ ⠈⢛⣉⣿⣿⣋⣙⡃
⠀⠛⠉⠉⢿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀⠛⢻⣿⣿⠛⠛⠛⠛
⠀⠀⠀⠀⠘⢿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀   ⠀⢀⣀⣴⡿⠟⠀⠀Bruno Soares Rodrigues
⠀⠀⠀⠀⠀⠀⠙⢿⣷⣦⣤⣄⣀⣀⣀⣀⡀⢀⣀⣠⣤⣤⣴⣿⠿⠋⠀12511ECP004
⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠛⠛⠿⠿⠟⠻⠟⠻⠛⠛⠉⠉⠀⠀⠀⠀
*/
#include <stdio.h>

/*Cão de pequeno porte
Multiplique os 2 primeiros anos por 12,5;
Subtraia da idade do pet esses 2 anos, e multiplique o restante por 4,5.

Cão de médio porte
Multiplique os 2 primeiros anos por 10,5;
Subtraia da idade do pet esses 2 anos, e multiplique o restante por 5,7.

Cão de grande porte
Multiplique os 2 primeiros anos por 9;
Subtraia da idade do pet esses 2 anos, e multiplique o restante por 8.*/

int porte;
int idade;
float idadeCachorro;

int main(void) {

  // Valida a leitura
  // Se o retorno for diferente de 1, a entrada e considerada invalida
  if (scanf("%d", &idade) != 1 || idade <= 0 || idade > 19) {
    printf("Valor incorreto!\n");
    return 1;
  }

  // Valida a leitura
  // Se o retorno for diferente de 1, a entrada e considerada invalida
  if (scanf("%d", &porte) != 1 || porte > 3 || porte < 1) {
    printf("Valor incorreto!\n");
    return 1;
  }

  // Aplica a regra de calculo de acordo com o porte do animal
  switch (porte) {
  case 1:
    // Porte pequeno: 12.5 anos para os 2 primeiros anos e 4.5 para os demais
    if (idade > 2) {
      idadeCachorro = 2 * 12.5 + (idade - 2.0) * 4.5;
    } else {
      idadeCachorro = idade * 12.5;
    }
    break;

  case 2:
    // Porte medio: 10.5 anos para os 2 primeiros anos e 5.7 para os demais
    if (idade > 2) {
      idadeCachorro = 2 * 10.5 + (idade - 2.0) * 5.7;
    } else {
      idadeCachorro = idade * 10.5;
    }
    break;

  default:
    // Porte grande: 9.0 anos para os 2 primeiros anos e 8.0 para os demais
    if (idade > 2) {
      idadeCachorro = 2 * 9.0 + (idade - 2.0) * 8.0;
    } else {
      idadeCachorro = idade * 9.0;
    }
    break;
  }

  // Exibe o resultado formatado com 1 casa decimais, passando a variavel
  // calculada
  printf("Idade humana = %.1f\n", idadeCachorro);
  return 0;
}
