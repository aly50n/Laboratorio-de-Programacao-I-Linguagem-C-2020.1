#include <stdio.h>

int main()
{
    int vetor[100], i,menor_num, indice = 0;
    
    printf("Digite o 1º valor: ");
    scanf("%d", &vetor[0]);
    menor_num= vetor[0];
    
    for(i=1; i < 100; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor_num)
        {
            menor_num= vetor[i];
            indice = i;
        }
        
    }
    if (indice == 0)
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Não existe posição anterior.");
        printf("Valor armazenado na posição posterior[%d]: %d",indice + 1, vetor[indice + 1]);
    }
    else if (indice == 99)
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Valor armazenado na posição anterior[%d]: %d",indice - 1, vetor[indice - 1]);
        printf("Não existe posição posterior.");
    }
    else
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Valor armazenado na posição anterior[%d]: %d",indice - 1, vetor[indice - 1]);
        printf("Valor armazenado na posição posterior[%d]: %d",indice + 1, vetor[indice + 1]);
    }
    
    return 0;
}