#include <stdio.h>
#include <stdlib.h>

int main() {
    float a1, r, an;
    int N;

    printf("Digite o primeiro termo da PA (a1): ");
    scanf("%f", &a1);
    printf("Digite a raz�o da PA (r): ");
    scanf("%f", &r);
    printf("Digite o n�mero do termo desejado (N): ");
    scanf("%d", &N);

    // C�lculo do N-�simo termo da PA
    an = a1 + (N - 1) * r;

    printf("O %d-�simo termo da PA �: %.2f\n", N, an);

    return 0;
}

