#include <stdio.h>
#include <stdlib.h>


 int main () {
 char nome[100];
 int idade;
 int dias;


 printf ("Escreva seu nome:");
 scanf ("%s",&nome);
 printf ("Escreva sua idade:");
 scanf ("%d", &idade);

 dias = 365 * idade;
 printf ("Voce tem aproximadamente %d dias de vida", dias);

return 0;
 }
