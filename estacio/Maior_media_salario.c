#include <stdio.h>
#include <stdlib.h>

//L� o sal�rio de 10 funcion�rios de uma empresa, calcula e mostra o maior sal�rio e a m�dia salarial da empresa.

void main()
{

    int cont, n;
    float salario, maior, media, soma;

    maior=0;
    soma=0;

    printf("Quantos salarios serao digitados? ");
    scanf("%d",&n);

    for (cont=1; cont<=n; cont=cont+1)
    {

        printf("Digite um salario? ");
        scanf(" %f", &salario);
        soma=soma+salario;

        if (salario>maior)
        {
            maior=salario;
        }

    }
            media=soma/n;

            printf("\nO maior salario e R$ %.2f", maior);
            printf("\nA media salarial e R$ %.2f\n", media);


}
