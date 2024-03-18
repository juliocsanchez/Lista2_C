#include <stdio.h>

int main()
{

    int dia1, indice;
    char sair = 'n';

    char *semana[] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};

    int tamanho = sizeof(semana) / sizeof(semana[0]);

    do
    {
        printf("Digite o número: ");
        scanf("%d", &indice);
        if (indice >= 1 && indice <= 7)
        {
            printf("O dia correspondente ao número %d é %s", indice, semana[indice - 1]);
        }
        else
        {
            printf("Dia inválido");
        }
        printf("\nDeseja sair? S/n: ");
        scanf(" %c", &sair);
    } while (sair != 's');

    return 0;
}