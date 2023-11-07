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
  int idioma;


  printf (" - Escolha abaixo o seu idioma - \n");
  printf ("1 - Ingles \n 2 - Espanhol \n 3 - Frances \n");
  printf ("Digite a opcao: ");
  fflush (stdin);
  scanf ("%d", &idioma);

  switch (idioma)
    {
    case 1:
      printf ("Welcome! \n");
      printf ("His choice was the English language.");

      break;
    case 2:
      printf ("Sea bienvenido! \n");
      printf ("TC: elegiste el idioma en espaC1ol.");

      break;
    case 3:
      printf ("Accueillir! \n");
      printf ("Vous avez choisi la langue en franC'ais.");

      break;
    default:
      printf ("Invalido");
      break;
    }

  return 0;
}
