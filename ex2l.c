#include <stdlib.h>
#include <stdlib.h>

int main(){
   int n1;
   int n10;
   int n50;
   int n100;
   int v;

   printf("Digite um valor em dinheiro: ");
   scanf("%i",&v);

   n100= v/100;
   v=v%100;
   n50=v/50;
   v=v%50;
   n10=v/10;
   v=v%10;
   n1=v;

   printf("Notas de 100 reais: %i\n",n100);
   printf("Notas de 50 reais: %i\n",n50);
   printf("Notas de 10 reais: %i\n",n100);
   printf("Notas de 1 real: %i\n",n1);

   return 0;
}
