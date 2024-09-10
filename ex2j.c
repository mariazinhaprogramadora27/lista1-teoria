#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n1;
    int n10;
    int n50;
    int n100;
    int t;
    printf("Digite a quantidade de notas de 1 real: ");
    scanf("%i",&n1);
    printf("Digite a quantidade de notas de 10 real: ");
    scanf("%i",&n10);
    printf("Digite a quantidade de notas de 50 real: ");
    scanf("%i",&n50);
    printf("Digite a quantidade de notas de 100 real: ");
    scanf("%i",&n100);
    t=(n1*1)+(n10*10)+(n50*50)+(n100*100);
    printf("A quantidade total de dinheiro: %i reais",t);
    return 0;
}

