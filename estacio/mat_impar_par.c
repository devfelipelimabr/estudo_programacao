#include <stdio.h>
#include <stdlib.h>

//lê dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.

void main()
{

    int mat[3][4], par, imp, lin, col;
    par=imp=0;

    for (lin=0;lin<3;lin++){
        for (col=0;col<4;col++){

            printf("Digite o valor do endereco [%d, %d]:", lin, col);
            scanf(" %d", &mat[lin][col]);

            if ((mat[lin][col])%2==0){
                par++;
            }else {
            imp++;
            }
        }

    }

    printf("\nPAres: %d", par);
    printf("\nImpares: %d", imp);

}
