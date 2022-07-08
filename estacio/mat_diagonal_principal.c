#include <stdio.h>
#include <stdlib.h>

//lê dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.

void main()
{

    int mat[5][5], par, imp, lin, col;
    par=imp=0;

    for (lin=0; lin<5; lin++)
    {
        for (col=0; col<5; col++)
        {

            printf("\nDigite o valor do endereco [%d, %d]:", lin, col);

            if (lin!=col)
        {
            scanf(" %d", &mat[lin][col]);

            }
            else
            {
                mat[lin][col]=0;
                printf("\nO endereco [%d, %d] foi auto-completado.\n", lin, col);

            }
        }

    }

    printf("\nOs elementos atualizados sao:\n");

    for (lin=0; lin<5; lin++)
    {
        for (col=0; col<5; col++)
        {


            printf(" %d ", mat[lin][col]);

        }

        printf("\n");
    }

}
