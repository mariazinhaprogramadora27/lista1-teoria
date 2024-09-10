#include <stdio.h>
#include <stdlib.h>

int main(){
    const float pa1=24.13;
    const float pa2=11.00;
    const float pa3=38.65;
    const float dva1=17.00;
    const float dva2=35.00;
    const float dva3=25.00;
    int qa1,qa2,qa3;
    float ga1,ga2,ga3;
    float vt=1000.00;
    float gt;

    printf("Digite a quantidade de Acao 1 que deseja comprar (24,13 R$ por unidade): ");
    scanf("%d",&qa1);
    printf("Digite a quantidade de Acao 2 que deseja comprar (11,00 R$ por unidade): ");
    scanf("%d",&qa2);
    printf("Digite a quantidade de Acao 3 que deseja comprar (38,65 R$ por unidade): ");
    scanf("%d",&qa3);
    ga1=qa1*pa1;
    ga2=qa2*pa2;
    ga3=qa3*pa3;
    gt=ga1+ga2+ga3;

    if (gt>vt){
        printf("O total gasto com as ações excede o valor disponível de R$1000,00.\n");
        return 1;
        }
    float dya1= dva1/pa1)*100;
    float dya2=(dva2/pa2)*100;
    float dya3=(dva3/pa3)*100;
    printf("Dividend Yield das Ações:\n");
    printf("Ação 1: %.2f%%\n", dya1);
    printf("Ação 2: %.2f%%\n", dya2);
    printf("Ação 3: %.2f%%\n", dya3);

    return 0;
}
