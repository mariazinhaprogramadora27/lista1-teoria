#include <stdio.h>
#include <stdlib.h>

int main() {
    float fahrenheit, celsius;

    // Entrada do usuário
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversão de Fahrenheit para Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Exibindo o resultado
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    return 0;
}
