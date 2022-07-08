#include <stdio.h>
#include <stdlib.h>

//mostra o maior numero de 15

void main()
{

    int cont, x, y;
    y=0;

    for (cont=1; cont<=15; cont=cont+1)
    {

        printf("Digite um numero? ");
        scanf("%d", &x);

        if (x>y)
        {
            y=x;
        }

    }

            printf("O maior numero digitado e %d", y);


}
