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
  int primeiroNumero;
  int segundoNumero;
  int operacao;
  int resultado;

  printf ("Digite o primeiro numero: ");
  scanf ("%d", &primeiroNumero);

  printf ("Digite o segundo numero: ");
  scanf ("%d", &segundoNumero);
  fflush (stdin);
  printf ("Caso seja adicao digite 1. \n");
  printf ("Caso seja subtracao digite 2. \n");
  fflush (stdin);
  printf ("Escolha a operacao: ");
  scanf ("%d", &operacao);

  switch (operacao)

    {
    case 1:
      printf ("A operacao C) a de adicao\n");
      resultado = primeiroNumero + segundoNumero;
      printf ("O resultado C): %d", resultado);
      break;
    case 2:
      printf ("A operacao C) a de subtracao\n");
      resultado = primeiroNumero - segundoNumero;
      printf ("O resultado C): %d", resultado);
      break;

    default:
      printf ("Erro.");
      break;
    }




  return 0;
}
