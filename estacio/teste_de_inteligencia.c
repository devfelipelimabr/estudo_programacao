#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //Biblioteca para habilitar o SetConsole


int main()
{

    SetConsoleCP(1252); //Comando para reconhecer acentuação
    SetConsoleOutputCP(1252);
    char resp;


    printf("\nTeste rápido de inteligência. Responda a pergunta e obtenha o resultado\n");
    printf("\nVocê vai votar em BOLSONARO? digite S(sim) ou N(não): ");
    scanf("%c", &resp);

    while ((resp!='s')&&(resp!='S')&&(resp!='n')&&(resp!='N'))
    {
        printf("\nDigite a resposta correta S(sim) ou N(não)");
        scanf(" %c", &resp);

    }

    if ((resp=='S')||(resp=='s'))
    {
        printf("\nRESPOSTA: Você é BURRO!\n");
    }
    else
    {
        printf("\nRESPOSTA: Você é INTELIGENTE!\n");

    }

    printf("\nCriado por Felipe Lima. Obs.: Aprovado pela sociedade brasileira de psquiatria :p");

    printf("\nPressione uma tecla e depois ENTER para finalizar.\n");
    scanf(" %c", &resp);

    return 0;
}
