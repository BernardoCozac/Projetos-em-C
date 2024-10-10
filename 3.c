#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char palavra[100];
    int tamanho,vogais = 0,i;
    printf("Insira uma palavra para determinar as vogais: ");
    gets(palavra);
    tamanho = strlen(palavra); // Determina o tamanho da String para o ciclo "for"
    for(i = 0; i <= tamanho; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            vogais++; // se a letra no array corresponder a uma vogal... Sei que falta as upper case :D
        }
    }
    printf("A palavra tem %d vogais\n",vogais);
    return 0;
}
