#include <stdio.h>

int main()
{
    int num, m, c, d, u, dm;
    printf("Digite um núemro de 5 dígitos:");
    scanf("%d", &num);

    if (!(num <= 99999 && num >= 10000))
    {
        printf("Número inválido\n");
    }
    else
    {
        dm = (num - (num % 10000));
        m = num - (dm + (num % 1000));
        c = num - (dm + m + (num % 100));
        d = num - (c + dm + m + (num % 10));
        u = num - (dm + c + d + m);

        int m1, c1, d1, u1, dm1;
        dm1 = dm / 10000;
        m1 = m / 1000;
        c1 = c / 100;
        d1 = d / 10;

        if (dm1 == u && m1 == d1)
        {
            printf("Número palíndromo!\n");
        }
        else
        {
            printf("Não é palíndromo!\n");
        }
        }
}
