#include <stdio.h>
#include <stdlib.h>

//Lê uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.

void main()
{

    char letra;

    int conta=0, conte=0, conti=0, conto=0, contu=0;

    printf("Digite uma letra minúscula (a..z) a cada linha e tecle ENTER : \n");

    scanf("%c",&letra);

    while (letra!='.')

    {

        switch (letra)

        {

        case 'a':

            conta++;
            break;

        case 'e':

            conte++;
            break;

        case 'i':

            conti++;
            break;

        case 'o':

            conto++;
            break;

        case 'u':

            contu++;
            break;

        }

        scanf("%c",&letra);

    }

    printf("Total de A: %d \n",conta);

    printf("Total de E: %d \n",conte);

    printf("Total de I: %d \n",conti);

    printf("Total de O: %d \n",conto);

    printf("Total de U: %d \n",contu);

}
