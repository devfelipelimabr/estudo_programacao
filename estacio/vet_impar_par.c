#include <stdio.h>
#include <stdlib.h>

void main()
{

    int vet1[15], vet2[15], i, j;

    for (i=0;i<15;i++){

        printf("Digite um numero: ");
        scanf(" %d", &vet1[i]);

    }

    for (i=0;i<15;i++){

        if (vet1[i]%2==0){
        vet2[i]=vet1[i+1];

        }else{
        vet2[i]=vet1[i-1];}

    }

    for (i=0;i<15;i++){

        printf("\nPrimeiro vetor = %d ", vet1[i]);
    }

    printf("\n");

     for (i=0;i<15;i++){

        printf("\nSegundo vetor = %d ", vet2[i]);
    }

}
