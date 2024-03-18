#include <stdio.h>

int main()
{
    int num = 4;

    printf("Pós incrementar:\n");
    while (num > 1)
    {
        printf("%d\n", num--);
    }

    num = 4;

    printf("\nPré incrementar:\n");
    while (num > 1)
    {
        printf("%d\n", --num);
    }
}
