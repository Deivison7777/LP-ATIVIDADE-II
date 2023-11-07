/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int configuracao;


  printf (" (- Menu do gamer -) \n");
  printf ("1 - Novo jogo \n 2 - Carregar jogo \n 3 - Configuracoes \n");
  printf ("Digite a opcao: ");
  fflush (stdin);
  scanf ("%d", &configuracao);

  switch (configuracao)
    {
    case 1:
      printf ("=- Novo jogo -=:  \n");
      printf ("Esta preparado para iniciar uma nova aventura?\n");
      printf ("Preparando o mundo... \n");
      printf ("Vamos nessa! \n");

      break;
    case 2:
      printf ("=- Carregar jogo -= \n");
      printf("O jogo esta salvo \n Aguarde um momento que a sua aventura vai se inciar!\n");
      printf("Abrindo o mundo... \n");
      printf("Seja bem-vindo de volta!");

      break;
    case 3:
      printf ("=- Configuracoes -= \n");
      printf ("Audio do jogo ------50%------\n");
      printf ("Brilho do jogo -----------90%-\n");
      printf ("Graficos () Ultra | ()Mediano | (x) Suave\n");
      break;
    default:
      printf ("Invalido");
      break;
    }

  return 0;
}
