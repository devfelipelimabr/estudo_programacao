#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Lê uma palavra/frase, e imprime a mesma de tras para frente

void main()
{
    char nome[50]=" ";
    int ind;
    printf("Digite o nome: ");
    scanf ("%s",nome);
    for (ind=49; ind>=0; ind--)
    {
        printf ("%c ",nome[ind]);
    }
}
