#include <stdio.h>
#include <stdlib.h>

//Lê uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.

void main()
{

    int a, e, i, o, u;
    char aa, ee, ii, oo, uu, letra;
    aa='a';
    ee='e';
    ii='i';
    oo='o';
    uu='u';
    a=e=i=o=u=0;

    printf("Digite a primeira letra: ");
    scanf("%c", &letra);

    while (letra!='.')
    {
        if (letra==aa)
        {
            a++;
        }

        if (letra==ee)
        {
            e++;
        }

        if (letra==ii)
        {
            i++;
        }

        if (letra==oo)
        {
            o++;
        }

        if (letra==uu)
        {
            u++;
        }



        printf("\nDigite mais uma letra: ");
        scanf(" %c", &letra);

    }

    printf("\nA vogal A apareceu %d vezes.", a);
    printf("\nA vogal E apareceu %d vezes.", e);
    printf("\nA vogal I apareceu %d vezes.", i);
    printf("\nA vogal O apareceu %d vezes.", o);
    printf("\nA vogal U apareceu %d vezes.", u);
    
    printf("Fim do programa!");




}
