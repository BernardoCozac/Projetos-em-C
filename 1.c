#include <stdio.h>


int main()
{
    int num,i;
    long long int factorial = 1;
    printf("Insira um numero: ");
    scanf("%d",&num);
    for(i= 1; i <= num ; i++){
        factorial *= i;
    }

    printf("\nO Fatorial de %d e: %llu\n",num,factorial);

    return 0;
}
