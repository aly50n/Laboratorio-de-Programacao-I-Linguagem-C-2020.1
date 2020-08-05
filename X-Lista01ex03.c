#include <stdio.h>

int main()
{
    int num, i, j, cont=0;

    printf("Digite um número inteiro:");
    scanf("%d", &num);
    
    printf("Os números primos existentes até o número digitado são: ");
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            if(i % j == 0)
            {
                cont= cont + 1;
            }
        }
        if(cont == 2)
        {
            printf("%d ",i);
        }
        cont = 0;
    }

    return 0;
}
