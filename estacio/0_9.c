#include <stdio.h>
#include <stdlib.h>

//Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar


void main()
{


    int num;


    do
    {
        printf("\nDigite um numero: ");
        scanf(" %d", &num);
        if (num!=0&&num!=9)
        {
            if (num%2==0)
            {
                printf("Sucessor = %d\n", num+1);
            }
            else
            {
                printf("Antecessor = %d\n", num-1);

            }
        }

    }
    while (num!=0&&num!=9);


}
