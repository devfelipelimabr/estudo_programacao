#include <stdio.h>
#include <stdlib.h>

//numeros pares em um intervalo

void main()
{

    int cont, x, y;

    printf("Qual o primeiro numero do intervalo? ");
    scanf("%d", &x);
    if (x%2 != 0)
    {
        x=x+1;

    }
    printf("Qual o segundo numero do intervalo? ");
    scanf(" %d", &y);

    for (cont=x; cont<=y; cont=cont+2)

    {

        printf ("%d\n",cont);

    }

}
