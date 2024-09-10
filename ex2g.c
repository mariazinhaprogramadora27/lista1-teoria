#include <stdio.h>
#include <stdlib.h>

int main() {
    float P, V, T, M;

    printf("Digite a pressão do pneu (P) em unidades apropriadas: ");
    scanf("%f", &P);
    printf("Digite o volume do pneu (V) em unidades apropriadas: ");
    scanf("%f", &V);
    printf("Digite a temperatura do pneu (T) em graus Fahrenheit: ");
    scanf("%f", &T);

    M = (P * V) / (0.37 * (T + 460));

    printf("A massa de ar no pneu é: %.2f unidades de massa\n", M);

    return 0;
}
