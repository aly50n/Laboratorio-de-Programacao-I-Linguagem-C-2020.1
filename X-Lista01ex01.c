#include <stdio.h>

int main()
{
    int numero,i,cont=0;
    printf("Digite um número para determinarmos se ele é ou não primo: ");
    scanf("%d", &numero);
    for(i=1; i <= numero; i++)
    {
        if (numero%i == 0)
            { cont = cont + 1; }
    }
    if (cont == 2)
    {
        printf("O número %d é primo", numero);
    }
    else
    {
        printf("O número %d não é primo", numero);
    }
    return 0;
}
