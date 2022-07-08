#include <stdio.h>
#include <stdlib.h>

//lê 100 números inteiros e mostra-os na ordem inversa em que foram lidos.

void main()
{

    int n;
    printf("Quantos numeros serao digitados? ");
    scanf("%d", &n);

    int vet[n], i;


    for (i=0;i<n;i++){
        printf("Digite o %do numero: ", i+1);
        scanf(" %d", &vet[i]);
    }

    for (i=n-1;i>=0;i--){
        printf("\nNumero digitado = %d\n", vet[i]);
    }



}
