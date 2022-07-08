#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    char resp;


    printf("\nTeste r�pido de intelig�ncia. Responda a pergunta e obtenha o resultado\n");
    printf("\nVoc� votou em BOLSONARO em 2018? digite S(sim) ou N(n�o): ");
    scanf("%c", &resp);

    while ((resp!='s')&&(resp!='S')&&(resp!='n')&&(resp!='N'))
    {
        printf("\nDigite a resposta correta S(sim) ou N(n�o)");
        scanf(" %c", &resp);

    }

    if ((resp=='S')||(resp=='s'))
    {
        printf("\nRESPOSTA: Voc� � BURRO!\n");
    }
    else
    {
        printf("\nRESPOSTA: Voc� � INTELIGENTE!\n");

    }

    printf("\nCriado por Felipe Lima. Obs.: Aprovado pela sociedade brasileira de psquiatria :p");

    printf("\nPressione uma tecla e depois ENTER para finalizar.\n");
    scanf(" %c", &resp);

    return 0;
}
