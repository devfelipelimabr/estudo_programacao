#include <stdio.h>
#include <stdlib.h>


void main()
{

    int a, *b, c;
    a=5;
    b=&a;
    c=10;

    printf("Digite um valor para b: ");
    scanf(" %d", b);
    printf("\nOs enderecos de a, b e c sao: %p %p %p", &a, &b, &c);
    printf("\nValores de a, b e c: %d, %d, %d", a, b, c);

}
