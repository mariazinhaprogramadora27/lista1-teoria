#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura;
    float consumo_por_metro_quadrado = 300;  // em ml
    float capacidade_lata = 2000;  // em ml (2 litros)

    // Entrada do usuário
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);

    // Calculando a área da parede
    float area_parede = largura * altura;

    // Calculando a quantidade total de tinta necessária
    float quantidade_necessaria = area_parede * consumo_por_metro_quadrado;

    // Calculando o número de latas necessárias
    float latas_necessarias = quantidade_necessaria / capacidade_lata;

    // Arredondando para cima, pois não podemos comprar uma fração de lata
    int latas = (int)ceil(latas_necessarias);

    // Exibindo o resultado
    printf("Você precisará de %d lata(s) de tinta para pintar a parede.\n", latas);

    return 0;
}
