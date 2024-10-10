#include <stdio.h>

int main(int argc, char const *argv[])
{
    char unidade;
    float temperatura;
    printf("Insira a unidade de partida -> F = Farenheit | C = Celcius: ");
    scanf("%c",&unidade);
    printf("\nInsira a temperatura a converter: ");
    scanf("%2f",&temperatura);

    switch (unidade)
    {
    case 'C':
        temperatura = (temperatura * 1.8) + 32; // Fórmula de Conversão
        break;
    case 'c':
        temperatura = (temperatura * 1.8) + 32;
        break;
    case 'F':
        temperatura = (temperatura / 1.8) - 32; // Fórmula de Conversão (Inverso da outra)
        break;
    case 'f':
        temperatura = (temperatura / 1.8) - 32;
        break;
    default:
        printf("Temperatura invalida.\n");
        break;
    }
    printf("\nA temperatura convertida e: %.2f\n",temperatura);

    return 0;
}
