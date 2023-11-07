/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int primeiroNumero;
  int segundoNumero;
  int maiorNumero;
  int menorNumero;
  printf ("Digite o primeiro numero: ");
  scanf ("%d", &primeiroNumero);
  printf ("Digite o segundo numero: ");
  scanf ("%d", &segundoNumero);

  maiorNumero = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
  menorNumero = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
  
  printf("Maior numero: %d \n", maiorNumero);
  printf("Menor numero: %d", menorNumero);



  return 0;
}
