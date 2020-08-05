#include <stdio.h>

int main(){
    
    int num,i,aux=0,aux2=1,aux3=0;
    
    printf("Digite um numero inteiro menor que (46):");
    scanf("%d",&num);
    
    while(num >= 46 ) {
        printf("O numero deve ser menor que (46), tente outro número:");
        scanf("%d",&num); }
        
    printf("FIBONACCI \n");
    
    for(i=0;i<num;i++){
        aux3=aux+aux2;
        aux=aux2;
        aux2=aux3;
        printf("%d \n",aux3); }

    return 0; }