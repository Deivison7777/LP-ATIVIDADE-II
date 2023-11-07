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

  float nota;

  printf ("Digite a nota do aluno: ");
  scanf ("%f", &nota);

  if (nota >= 9)
    {
      printf ("Sua nota foi excelente!");
    }

  else if (nota >= 7 && 8.9)
    {

      printf ("Sua nota foi Razoavel!");

    }
  else
    {
      printf ("Sua nota foi insuficiente!");

    }
  return 0;
}
