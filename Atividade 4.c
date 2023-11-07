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
  int idade;

  printf
    ("Se sua idade for maior que 18 voce ira continuara sessao, se nao for a sessao vai ser encerrada. \n");
  printf ("Digite a sua idade: ");
  scanf ("%d", &idade);

  if (idade >= 18)
    {
      printf ("Acesso liberado...\n\n Redirencionando para a pagina...");
    }
  else
    {
      printf ("Acesso negado! \n\n sessao encerrada!");
    }


  return 0;
}
