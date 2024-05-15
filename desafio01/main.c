#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, largura, comprimento, consumoMedio;

    printf("\nOlá, vamos calcular a capacidade, autonomia e classificação do seu reservatrio!");

    printf("\n\n- Informe a altura do reservatorio em centimetros: ");
        scanf("%f", &altura);
    printf("- Informe a largura do reservatorio em centimetros: ");
        scanf("%f", &largura);
    printf("- Informe o comprimento do reservatorio em centimetros: ");
        scanf("%f", &comprimento);
    printf("- Informe o consumo medio do reservatorio (em litros/dia): ");
        scanf("%f", &consumoMedio);

    float capacidade = (altura * largura * comprimento) / 1000;

    float autonomia = capacidade / consumoMedio;

    char classificacao[20];

    if(autonomia < 2){
        strcpy(classificacao, "Consumo elevado.");
    }else if(autonomia >= 2 && autonomia <= 7) {
        strcpy(classificacao, "Consumo moderado.");
    }else {
        strcpy(classificacao, "Consumo reduzido.");
    }

    printf("\nA capacidade desse reservatorio e de %.0f litros, com uma autonomia de \n%.0f litros por dia e possui uma classificação de %s\n", capacidade, autonomia,classificacao);
    return 0;
}
