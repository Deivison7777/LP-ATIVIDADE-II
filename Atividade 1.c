/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World");
  
int clima;

printf("Digite a temperatura do ambiente: ");
scanf("%d", &clima);

if (clima > 25){
printf("O clima está ensolarado.");
}
else if (clima < 15){
printf("O clima está chuvoso");
}
else{
    printf("O clima está nublado");
} 


    return 0;
}
