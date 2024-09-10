#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminante, raiz1, raiz2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    discriminante = b * b - 4 * a * c;


    if (a == 0) {
        printf("O coeficiente 'a' não pode ser zero em uma equação do segundo grau.\n");
    } else if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        printf("A raiz da equação é: %.2f\n", raiz1);
    } else {
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}

