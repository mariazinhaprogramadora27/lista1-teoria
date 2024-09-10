#include <stdio.h>
#include <stdlib.h>

int main() {
    float a1, r, an;
    int N;

    printf("Digite o primeiro termo da PA (a1): ");
    scanf("%f", &a1);
    printf("Digite a razão da PA (r): ");
    scanf("%f", &r);
    printf("Digite o número do termo desejado (N): ");
    scanf("%d", &N);

    // Cálculo do N-ésimo termo da PA
    an = a1 + (N - 1) * r;

    printf("O %d-ésimo termo da PA é: %.2f\n", N, an);

    return 0;
}

