#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int num; // número do utilizador.
    int i = 3;
    int isPrime;
    printf("Insira o seu numero: ");
    scanf("%d",&num);
    
    if(num < 2) {
        printf("Numeros menores que 2 nao sao primos!\n");
        return 0;
    }
    if(num == 2) {
        printf("2 e um numero primo.\n");
        return 0;
    }
    if(num % 2 == 0) {
        printf("Numeros pares maiores que 2 nao sao primos!\n");
        return 0;
    }

    for(i = 3; i <= sqrt(num); i += 2){ // Verificar divisores de 3 até à raiz quadrada do número para verificar se é primo.
        if(num % i == 0 ) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime) {
        printf("O numero %d e primo.\n",num);
    } else {
        printf("O numero %d nao e primo\n",num);
    }

    return 0;
}
